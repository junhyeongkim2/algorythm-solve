#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;

    cin >> t;
    int sq[101][101]={0,};

    int ans = 0;

    while(t--){

        int left;
        int down;
        cin >> left >> down;

        for (int i = left; i <left+10 ; ++i) {
            for (int j = down; j <down+10 ; ++j) {
                if(sq[i][j]==0){
                    sq[i][j] = 1;
                }else{
                    sq[i][j] = 2;
                }
            }
        }



    }
    for (int i = 100; i >= 0 ; --i) {
        for (int j = 0; j < 101 ; ++j) {
            if(sq[i][j]==1 || sq[i][j]==2){
                ans++;
            }
        }
    }
    cout << ans << "\n";

}





