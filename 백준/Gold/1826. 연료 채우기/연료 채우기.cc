#include <bits/stdc++.h>
using namespace std;


int info[1000001];

int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>>v;

    for(int i = 0 ; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
        info[a]=b;
    }

    sort(v.begin(),v.end());

    int L,P;
    cin >> L >> P;

    priority_queue<int>pq;

    int nowOil=P;
    int ans =0;

    for(int i = 1 ; i < L; i++){
        nowOil--;
        if(info[i])pq.push(info[i]);

        if(!nowOil){

            if(pq.empty()){
                cout << -1;
                return 0;
            }else{
                ans++;
                nowOil+=pq.top();
                pq.pop();

            }
        }
    }
    cout << ans << "\n";




    return 0;
}