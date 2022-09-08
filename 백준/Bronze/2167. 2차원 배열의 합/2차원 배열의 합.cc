#include <bits/stdc++.h>

using namespace std;


int N , M ;

int arr[301][301];

int main(){
    cin >> N >> M;


    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <=M ; ++j) {

            cin >> arr[i][j];
        }
    }
    int b;
    cin >> b;

    for (int z = 0; z <b ; ++z) {
        int i, j , x , y;
        cin >> i >> j >> x >> y;
        int ans =0;

        for (int k = i; k <=x ; ++k) {
            for (int l = j; l <= y; ++l) {
                ans+= arr[k][l];
            }
        }
        cout << ans <<"\n";

    }








}