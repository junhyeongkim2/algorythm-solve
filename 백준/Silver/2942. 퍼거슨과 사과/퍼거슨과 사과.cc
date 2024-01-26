#include <bits/stdc++.h>

using namespace std;

vector<int> m;

long long int gcd(int a, int b) {

    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int r, g;
    cin >> r >> g;

    long long int gcdValue = gcd(r, g);

    for (int i = 1; i<= gcdValue; i++) {
        if(gcdValue%i==0){
            cout << i << " " << r/i << " " << g/i <<"\n";
        }

    }


}