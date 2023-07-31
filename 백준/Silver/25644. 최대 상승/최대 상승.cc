#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);



    int n;
    cin >> n;

    vector<int>v;

    for(int i = 0 ; i < n ; i ++){
        int a;
        cin >> a;
        v.push_back(a);
    }


    if(n==1){
        cout << 0 << "\n";
    }else{

        int ans = 0;
        int now = v[0];
        for(int i = 1; i < n; i++){

            if(now > v[i]){
                now = v[i];
            }else if (now < v[i]){
                ans = max(ans,v[i]-now);
            }
        }
        cout << ans << "\n";

    }









}

