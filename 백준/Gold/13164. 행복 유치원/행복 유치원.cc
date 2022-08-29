#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int N , K;
vector<int>v;
vector<int>v2;
int main(){
    cin  >> N >> K ;

    for (int i = 0; i <N ; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    for (int i = 1; i <N ; ++i) {
        v2.push_back(v[i] - v[i-1]);
    }

    std::sort(v2.begin(), v2.end());

    int ans =0 ;
    for (int i = 0; i < N-K; ++i) {
        ans += v2[i];
    }
    cout << ans;











}