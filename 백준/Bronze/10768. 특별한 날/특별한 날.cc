#include <bits/stdc++.h>
using namespace std;


int a, b ;


int main(){

    cin >> a >> b;

    if(a==2 && b==18){
        cout << "Special";
    }

    if(a<2){
        cout << "Before";
    }else if(a>2){
        cout << "After";
    }

    if(a==2 && b<18){
        cout << "Before";
    }

    if(a==2 && b>18){
        cout <<"After";
    }







}