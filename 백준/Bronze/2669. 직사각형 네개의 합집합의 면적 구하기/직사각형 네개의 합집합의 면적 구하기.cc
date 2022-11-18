#include <bits/stdc++.h>
using namespace std;

int x,y,x2,y2;

int arr[100][100];


int main() {

    for (int i = 0; i < 4; ++i) {
        cin >> x >> y >> x2 >> y2;
        for (int j = y; j < y2; ++j) {
            for (int k = x; k <x2 ; ++k) {
                arr[j][k] = 1;
            }
        }
    }

    int ans = 0;


    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if(arr[i][j] !=0){
                ans ++;
            }
        }
    }

    cout << ans;







}




