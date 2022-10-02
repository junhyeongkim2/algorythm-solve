#include <bits/stdc++.h>
using namespace std;

int  a , b , c , d , e , f;

int main(){

    cin >> a >> b>> c>> d>> e>> f;

    int a1 =0;
    int b1 =0;

    a1 = 3*a +2*b + 1*c;
    b1 = 3*d + 2*e + 1*f;

    if( a1>b1){
        cout << "A";
    }else if(a1<b1){
        cout <<"B";
    }else{
        cout <<"T";
    }








}