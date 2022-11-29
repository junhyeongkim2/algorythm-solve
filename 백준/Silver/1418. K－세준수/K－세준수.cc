#include <bits/stdc++.h>

using namespace std;

int arr[100010];

int main() {

    int n,k;
    int cnt=0;
    cin >> n >> k;
    for (int i = 2; i <=n ; ++i) {
        if(arr[i]) continue;
        for (int j = i; j <= n; j+=i) {
            arr[j] = i;
        }
    }
    for (int i = 1; i <=n ; ++i) {
        if(arr[i]<=k) cnt++;
    }
    cout << cnt <<"\n";





}













