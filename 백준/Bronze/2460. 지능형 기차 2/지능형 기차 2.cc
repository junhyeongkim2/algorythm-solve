#include <bits/stdc++.h>
using namespace std;

int arr[10];



int main() {

    int a1, b1;
    cin >> a1 >> b1;

    arr[0] += b1;
    arr[0] -= a1;
    if(arr[0]<0) arr[0]=0;


    for (int i = 1; i < 10; ++i) {
        int a,b;
        cin >> a >> b;

        arr[i] += arr[i-1];

        arr[i] += b;
        arr[i] -=a;
        if(arr[i]<0) arr[i]=0;


    }

    int max1=0;
    for (int i = 0; i < 10; ++i) {
        max1 = max(arr[i],max1);
    }
    cout << max1;



}