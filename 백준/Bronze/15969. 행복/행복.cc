#include <bits/stdc++.h>
using namespace std;


int n;

vector<int>graph;

int main() {

    cin >> n;

    int maxResult=0;
    int minResult=1000;

    for (int i = 0; i < n; ++i) {
        int a ;
        cin >> a ;
        maxResult = max(maxResult,a);
        minResult = min(minResult,a);
    }

    cout << maxResult - minResult;



}