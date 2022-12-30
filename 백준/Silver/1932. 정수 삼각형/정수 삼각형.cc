#include <bits/stdc++.h>

using namespace std;


int tri[500][500];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> tri[i][j];
            //cout << tri[i][j];
        }
        //cout<<"\n";
    }

    int ans =0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <=i ; ++j) {
            if(j==0){
                tri[i][j] += tri[i-1][j];
            }else if(j==i){
                tri[i][j] += tri[i-1][j-1];
            }else{
                tri[i][j] += max(tri[i-1][j-1],tri[i-1][j]);
            }

            ans = max(tri[i][j],ans);
        }
    }

    cout << ans <<"\n";




}




















