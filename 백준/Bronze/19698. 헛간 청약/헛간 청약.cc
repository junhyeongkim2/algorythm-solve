#include <iostream>
#include <algorithm>
using namespace std;

int main(){


    int n,w,h,l;

    cin >> n >> w >> h >> l;


    int a = w / l;
    int b = h / l;


    if(a*b < n){
        cout << a*b;
    }else{
        cout << n ;
    }








}