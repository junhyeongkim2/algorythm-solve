#include <bits/stdc++.h>

using namespace std;

int N ;

int main(){

    cin >> N;

    int cnt=0;
    while(true){
        cnt++;

        int ans = 1 + (cnt*cnt) + cnt;

        if(ans == N){
            cout << cnt <<"\n";
            break;
        }




    }





}