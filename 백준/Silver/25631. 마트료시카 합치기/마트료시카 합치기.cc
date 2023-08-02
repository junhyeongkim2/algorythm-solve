#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int>v;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int ans = 0 ;
    while(true){

        int temp =0;
        int cnt = 0;
        ans ++;
        for(int i = 0 ; i < v.size(); i++){

            if(temp < v[i]){
                temp = v[i];
                v[i]=0;
            }

            if(v[i]==0){
                cnt++;
            }
        }

        if(cnt == v.size()){
            break;
        }

    }
    cout << ans << "\n";








}

