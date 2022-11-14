#include <bits/stdc++.h>
using namespace std;

int arr1[10];
int arr2[10];

int main() {


    for (int i = 0; i < 10; ++i) {
        cin >> arr1[i];

    }
    for (int i = 0; i < 10; ++i) {
        cin >> arr2[i];
    }


    int a =0;
    int b = 0;
    for (int i = 0; i <10 ; ++i) {
        if(arr1[i]>arr2[i])a++;
        if(arr1[i]<arr2[i])b++;

        //cout << a << " " << b <<"\n";
    }


    if(a==b){
        cout << "D";
    }else{

        if(a>b)
            cout << "A";
        if(a<b)
            cout << "B";
    }








}