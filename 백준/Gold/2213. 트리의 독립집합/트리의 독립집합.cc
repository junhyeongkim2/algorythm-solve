#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int n, a, b, x, ans1, ans2;
int V[10001]; // weight
int dp[10001][2]; //
bool visit[10001];
vector<int> graph[10001];
vector<int> ans;

void DFS(int now)
{
    visit[now] = true;
    dp[now][1] = V[now];

    for (int child : graph[now])
    {
        if (!visit[child])
        {
            DFS(child);

            // 현재 노드를 포함하지 않는다면
            // 자식노드를 포함하는것과 포함하지 않는것 둘 중 큰 것을 채택
            dp[now][0] += max(dp[child][0], dp[child][1]);

            // 현재 노드를 포함한다면 자식노드는 포함 X
            dp[now][1] += dp[child][0];
        }
    }
}

void tracking(int prev, int now, int state) // 이전노드, 현재노드, 포함유무
{
    if (state == 1) // 현재 노드를 포함한다면
    {
        ans.push_back(now);

        for (int child : graph[now])
        {
            // 이전 노드라면 패스
            if (child == prev) continue;

            // 현재 노드를 포함했으므로 자식노드는 포함 X
            tracking(now, child, 0);
        }
    }
    else
    {
        for (int child : graph[now])
        {
            // 이전 노드라면 패스
            if (child == prev) continue;

            if (dp[child][0] > dp[child][1])
                // 다음 노드 포함 X
                tracking(now, child, 0);

            else
                // 다음 노드 포함 O
                tracking(now, child, 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> V[i];

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    DFS(1);

    ans1 = dp[1][0];
    ans2 = dp[1][1];

    if (ans1 > ans2) tracking(-1, 1, 0);
    else tracking(-1, 1, 1);

    cout << max(ans1, ans2) << '\n';

    sort(ans.begin(), ans.end());

    for (int x : ans)
    {
        cout << x << " ";
    }
}