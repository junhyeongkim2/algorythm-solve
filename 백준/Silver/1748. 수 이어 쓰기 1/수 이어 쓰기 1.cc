#include <bits/stdc++.h>
using namespace std;


int arr[101][101];

vector<pair<int,int>>points;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n = 0;
    int ans = 0;
    cin >> n;

    for(int i = 1 ; i <= n; i*=10){
//        cout << n-i+1 << "\n";
        ans += n-i+1;
    }

    cout << ans << "\n";


    return 0;
}