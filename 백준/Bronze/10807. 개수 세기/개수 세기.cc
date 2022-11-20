#include <bits/stdc++.h>
using namespace std;



int n ;

vector<int>v1;

int a ;





int main() {

    cin >> n;


    for (int i = 0; i <n ; ++i) {
        int aa;
        cin >> aa;
        v1.push_back(aa);
    }

    cin >> a;
    int ans = 0;

    for (int i = 0; i <v1.size() ; ++i) {
        if(v1[i] == a ){
            ans++;
        }
    }

    cout << ans <<"\n";













}




