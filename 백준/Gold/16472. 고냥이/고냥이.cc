#include <bits/stdc++.h>

#define visit trash
using namespace std;

int n;
string s;

map<char, int> m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    cin >> s;

    int left = 0;
    int right = 0;
    string tempS = "";
    int visitCount = 0;
    int ans = 0;


    while (left <= right && right < s.length()) {

        if (visitCount <= n) {
            tempS += s[right];


            if (m[s[right]] == 0) {
                visitCount++;
            }

            if (visitCount <= n) {
                int tempSLength = tempS.length();
                ans = max(tempSLength, ans);
            }

            m[s[right]]++;
            right++;


//            cout << tempS << " / 1 " << visitCount << "\n";

        } else if (visitCount > n) {
            m[s[left]]--;
            if (m[s[left]] == 0) {
                visitCount--;
            }
            tempS.erase(0, 1);
            left++;
//            cout << tempS << " / 2 " << visitCount << "\n";

        }


    }

    cout << ans << "\n";


}

