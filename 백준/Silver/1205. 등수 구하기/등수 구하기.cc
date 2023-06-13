#include<bits/stdc++.h>

using namespace std;

int main() {


    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n,t,p;
    cin >> n >> t >> p;
    vector<pair<int,int>>v;


    if(n==0){
        cout << 1 <<"\n";

        return 0;
    }




    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back({a,0});
    }

    sort(v.begin(),v.end(),greater<>());


    if(v[v.size()-1].first < t){
        v.push_back({t,1});
    }else{
        if(v.size() < p){
            v.push_back({t,1});
        }else{
            cout << -1 << "\n";
            return 0;
        }
    }

    sort(v.begin(),v.end(),greater<>());

    for(int i = 0 ; i < v.size(); i++){
        if(v[i].second == 1){
            cout << i +1 <<"\n";
            return 0;
        }

    }

}