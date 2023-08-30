#include <bits/stdc++.h>
using namespace std;


int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;


    vector<pair<pair<int,int>,pair<int,string>>>v;

    for(int i = 0 ; i < n ; i++){
        string s;
        int a,b,c;
        cin >> s >> a >> b >> c;
        v.push_back({{c,b},{a,s}});
    }


    sort(v.begin(),v.end());

    cout << v[v.size()-1].second.second << "\n";
    cout << v[0].second.second << "\n";














    return 0;
}