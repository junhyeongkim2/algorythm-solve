#include <bits/stdc++.h>

using namespace std;

long long int N;

int main(){

    cin >> N;

    int a = N/5;

    if(N%5==0){
        cout << a;
    }else{
        cout << a+1;
    }




}