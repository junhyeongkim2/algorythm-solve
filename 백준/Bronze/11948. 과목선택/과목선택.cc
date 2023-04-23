#include<bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<int>v;
    vector<int>s;

    for(int i = 0 ; i < 4; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    for(int i = 0; i < 2;i++){
        int a;
        cin >> a;
        s.push_back(a);
    }

    sort(v.begin(),v.end(),greater<>());
    sort(s.begin(),s.end(),greater<>());


    int ans =0;
    ans += v[0];
    ans += v[1];
    ans += v[2];
    ans += s[0];
    cout << ans <<"\n";









}

