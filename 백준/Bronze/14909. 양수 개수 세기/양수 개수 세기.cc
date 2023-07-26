#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int ans =0;

    while(1){
        int a;
        cin >> a;
        if (cin.eof() == 1) { break; }
        if(a>0){ans++;}
    }
    cout << ans << "\n";
}

