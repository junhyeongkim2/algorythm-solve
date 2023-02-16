#include <bits/stdc++.h>
#define MOD 1234567891
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


    long long sum = 0;
    long long R = 1;

    for(int i = 0 ; i < n ; i ++ ){

        sum = (sum + (s[i]-'a'+1) * R ) % MOD;
        R = (31 *R)%MOD;


    }
    cout << sum;





}