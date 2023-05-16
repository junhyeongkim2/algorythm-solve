#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >>n;
    vector<int>v(n);
    for(auto& c: v){
        cin >> c;
    }

    int s;
    cin >> s;

    int mx,idx;
    for(int i = 0 ; i < n && s; i++){
        mx = idx = -1;
        for(int j = i, k=0; j<n && k<=s; j++,k++){
            if(mx<v[j]){
                mx = v[j];
                idx = j;
            }
        }
        for(int j=idx; j>i && s; j--,s--){
            swap(v[j],v[j-1]);
        }
    }

    for(auto& c : v)cout << c << ' ';
    cout << "\n";
    return 0;


}