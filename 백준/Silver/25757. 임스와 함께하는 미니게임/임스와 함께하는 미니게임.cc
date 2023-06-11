#include<cstdio>
#include<bits/stdc++.h>
using namespace std;



int n;
char k;


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> k;
    vector<string>v;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());


    for(auto x : v){
        //cout << x << "\n";
    }

    int size = v.size();
    int ans =0;

    if(k=='Y'){
        size+=v.size();
        ans = size/2;

    }else if (k=='F'){
        size += v.size()/2;
        ans = size / 3;

    }else if (k=='O'){
        size += v.size()/3;
        ans = size/4;
    }

    cout << ans << "\n";

    return 0;
}