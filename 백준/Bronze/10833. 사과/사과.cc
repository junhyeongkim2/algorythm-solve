#include <bits/stdc++.h>
using namespace std;

int n ;
int a , b;

int main() {

    int ans = 0;
    cin >> n;
    for (int i = 0; i <n ; ++i) {
        cin >> a >> b;
        int c = b%a;
        //cout << c << "\n";
        ans += c;
    }
    cout << ans <<"\n";




}