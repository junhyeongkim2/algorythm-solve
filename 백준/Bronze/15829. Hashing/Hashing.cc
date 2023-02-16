#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    string s;
    cin >> n;
    cin >> s;
//
//    cout << 'a'-'a' << "\n";
//    cout << ('z'-'a')+1 << "\n";

    int ans = 0;

    for(int i = 0 ; i < n ; i ++ ){

        ans += ((s[i]-'a'+1) *  (int)pow(31,i) ) ;
    }
    cout << ans ;





}