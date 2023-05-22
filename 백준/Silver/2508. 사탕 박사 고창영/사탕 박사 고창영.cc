#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;

    cin >> t;

    while(t--){
        int r,c;
        cin >> r >> c;
        vector<string>v;

        for(int i = 0 ; i < r; i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        int cnt=0;

        for(int i = 0 ; i < r; i ++){
            for(int j = 0 ; j < c; j++){

                if(j>0&&j<c-1){
                    if ( v[i][j-1]=='>'&& v[i][j]=='o'&&v[i][j+1]=='<' ) {
                        cnt++;
                        //cout << i<< " " << j  << " 1";
                    }
                }
                if(i>0 && i<r-1){
                    if ( v[i-1][j]=='v'&& v[i][j]=='o'&&v[i+1][j]=='^' ) {
                        cnt++;
                        //cout << v[i][j] << " 2";
                    }
                }
            }
        }

        cout << cnt << "\n";





    }








    return 0;

}