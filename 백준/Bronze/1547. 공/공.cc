#include <bits/stdc++.h>

using namespace std;

int m;



int main() {

    cin >> m;

    int arr[] = {1,2,3};

    for (int i = 0; i <m ; ++i) {
        int a, b;
        cin >> a >> b;
        swap(arr[a-1],arr[b-1]);
    }
    for (int i = 0; i <3 ; ++i) {
        if(arr[i]==1) cout << i+1;

    }





}













