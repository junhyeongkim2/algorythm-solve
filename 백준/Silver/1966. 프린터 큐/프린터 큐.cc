#include <bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);


    int t;
    cin >> t;

    while(t--){
        int ans = 0;
        int n; int m;
        cin >> n >> m;
        deque<pair<int,int>>v;
        priority_queue<pair<int,int>>pq;

        for(int i = 0 ; i < n; i++){
            int a;
            cin >> a;
            v.push_back({a,i});
            pq.push({a,i});
        }

        while(true){
//            cout << v[0].first << " " << pq.top().first << "\n";
            if(v[0].first < pq.top().first){
                int fa = v.front().first;
                int fb = v.front().second;
                v.push_back({fa,fb});
                v.pop_front();
            }else if (v[0].first == pq.top().first){
                int fa = v.front().first;
                int fb = v.front().second;
                v.pop_front();
                pq.pop();
                ans++;
                if(fb == m){
                    cout << ans << "\n";
                    break;
                }
            }
        }

        
    }




}

