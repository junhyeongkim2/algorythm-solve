#include <bits/stdc++.h>

using namespace std;

int t;
string s;

int isPalendrom(int left, int right, bool canDelete) {

    while (left < right) {
        if (s[left] != s[right]) {
            if (canDelete) {
                if (isPalendrom(left + 1, right, false) == 0 || isPalendrom(left, right - 1, false) == 0) return 1;
            }
            return 2;
        }
        left++, right--;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;
        cout << isPalendrom(0, s.length() - 1, true) << "\n";
    }


}