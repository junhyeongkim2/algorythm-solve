#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> m;
    int cnt=0;


    for(int i = 1 ; i <= n; i++){

        string a = to_string(i);

        for(int j = 0 ; j < a.size(); j++){
            if(a[j]-'0'==m){
                cnt++;
            }
        }
    }
    cout << cnt << "\n";









}