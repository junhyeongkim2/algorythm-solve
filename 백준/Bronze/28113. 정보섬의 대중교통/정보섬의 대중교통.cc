#include <bits/stdc++.h>
using namespace std;



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n,a,b;
    cin >> n >> a >> b;

    if( a >  b) {
        cout << "Subway";
    }else if ( a < b){
        cout << "Bus";
    }else{
        cout << "Anything";
    }




    return 0;
}