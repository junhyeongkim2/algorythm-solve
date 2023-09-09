#include<bits/stdc++.h>

using namespace std;

int t;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int ans =0;


        for(int i = 0 ; i < n ; i++){
            int a, b, c;
            cin >> a >> b>> c;
            int maxResult = max(max(a,b),c);

            if(a<0&&b<0&&c<0){
                maxResult=0;
            }
            ans+=maxResult;

        }
        cout << ans << "\n";
        

    }





    return 0;
}