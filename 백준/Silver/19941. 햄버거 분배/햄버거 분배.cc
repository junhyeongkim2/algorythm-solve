#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main() {

    int n,k;
    cin >> n>>k;
    string s;
    cin >> s;

    int count =0;

    for(int i = 0 ; i < n; i++){
        if(s[i]=='P'){
            for(int j = i-k; j<=i+k; j++){
                if(j<0||j>=n)continue;
                if(s[j]=='H'){
                    s[j]='_';
                    count++;
                    break;
                }
            }
        }
    }

    cout << count << "\n";





    return 0;
}