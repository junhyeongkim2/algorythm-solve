#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int n ;
int main(){
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    std::sort(v.begin(), v.end(),greater<>());


    int m = 0;
    for (int i = 1; i <=n ; ++i) {
        //cout << v[i-1]+i << "\n";
         m = max(m,v[i-1]+i);
    }
    cout << m+1;




}