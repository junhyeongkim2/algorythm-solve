#include<bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int>v;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int ans =0;
    for(int i = 0 ; i < n-1; i++){
        ans += v[i];
    }
    cout << ans <<"\n";



}

