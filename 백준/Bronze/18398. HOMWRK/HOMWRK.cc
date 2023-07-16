#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;

    cin >> t;

    while(t--){
        int n;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            int a,b;
            cin >> a >> b;
            cout << a + b << " " << a*b <<"\n";
        }
    }


    return 0;
}