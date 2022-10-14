#include <bits/stdc++.h>

using namespace std;

int N;
int ans =0;


int main(){

    cin >> N;

    for (int i = 0; i <5 ; ++i) {
        int a;
        cin >> a;

        if(N==a){
            ans++;
        }
    }

    cout << ans <<"\n";







}