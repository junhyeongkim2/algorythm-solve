#include <bits/stdc++.h>

using namespace std;

int n , m ;


int arr[101][101];

int main() {

    cin >> n >> m ;

    for (int i = 0; i <n ; ++i) {
        int a , b , c , d;
        cin >> a >> b>> c>> d;
        for (int j = a; j <=c ; ++j) {
            for (int k = b; k <=d ; ++k) {
                arr[j][k]++;
            }
        }
    }

    int ans = 0;
    for (int i = 1; i <101 ; ++i) {
        for (int j = 1; j <101 ; ++j) {
            //cout << arr[i][j];
            if(arr[i][j]>m){
                ans ++;
            }
        }
        //cout << "\n";
    }

    cout << ans << "\n";







}













