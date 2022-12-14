#include <bits/stdc++.h>

using namespace std;

int n;

int main() {

    cin >> n;

    vector<int>v1;

    int cnt = 0 ;
    int a=0;
    int ans = 0;
    for (int i = 0; i <n ; ++i) {

        cin >> a;

        if(a==1){
            cnt++;
        }
        if(a==0){
            cnt =0;

        }
        ans+=cnt;
    }

    cout << ans <<"\n";








}





















