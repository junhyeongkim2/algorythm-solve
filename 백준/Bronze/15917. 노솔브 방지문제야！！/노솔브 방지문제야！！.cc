#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if ((a&(-a)) == a) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}