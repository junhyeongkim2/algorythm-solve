#include <bits/stdc++.h>
using namespace std;

int  a , b , c;

int main(){

    cin >> a >> b>> c;

    if(a+b+c >= 100){
        cout << "OK";
    }else{

        int m =  min( min(a,b) ,c );

        if(m==a){
            cout << "Soongsil";
        }else if(m==b){
            cout << "Korea";
        }else if(m==c){
            cout << "Hanyang";
        }

    }



}