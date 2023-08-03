#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n;
    cin >> n;
    string s;
    cin >> s;


    int cnt = 0;
    for(int i = 0 ; i < s.length(); i++){

        if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o'){
            cnt++;
        }



    }
    cout << cnt << "\n";




}

