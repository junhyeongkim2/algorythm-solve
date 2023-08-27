#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a, pair<int,int>b){

    if(a.second == b.second){
        return a.first< b.first;
    }
    return a.second < b.second;
}



int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while(T--){

        int n,m;
        int ans=0;
        int visited[1001]={0,};
        cin >> n >> m;

        vector<pair<int,int>>book;

        for(int i = 0 ; i < m; i++){
            int a,b;
            cin >> a >> b;
            book.push_back({a,b});
        }

        sort(book.begin(),book.end(),comp);


        for(int i = 0 ; i < book.size(); i++){
            for(int j = book[i].first; j<= book[i].second; j++){
//                cout << j << "\n";

                if(visited[j]==1){
                    continue;
                }

                if(visited[j]==0){
                    visited[j]=1;
                    ans++;
                    break;
                }


            }
        }

        cout << ans << "\n";



    }






    return 0;
}