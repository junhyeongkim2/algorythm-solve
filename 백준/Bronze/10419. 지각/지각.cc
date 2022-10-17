#include <bits/stdc++.h>

using namespace std;

int T;
int d;



int main(){
    cin >> T;

    while(T--){
        int a ;
        cin >> a;
        int cnt=0;

        while(true){
            int ss = cnt * cnt + cnt ;
            //cout << ss <<"\n" ;
            if((cnt+1) * (cnt+1) + cnt+1 > a || ss > a){
                cout << cnt << "\n";
                break;
            }
            cnt++;


        }







    }




}