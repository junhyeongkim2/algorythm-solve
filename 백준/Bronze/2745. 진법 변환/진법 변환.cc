#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    string s;
    cin >> s;
    int n;
    cin >> n;
    long long int sum =0;

    for (int i = 0; i <s.length() ; ++i) {

        //cout << s[i] -'0' <<"\n";
        if(s[i] - '0' >= 0&& s[i] - '0' < 10){
            sum = sum * n + (s[i]-'0');
        }else{
            sum = sum * n + (s[i]+10-'A');
        }
    }
    cout << sum << "\n";





}