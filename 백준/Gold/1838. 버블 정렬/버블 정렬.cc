#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<pair<int,int>>a(n);
    for(int i = 0; i< n;i++){
        cin >> a[i].first;
        a[i].second = i ;
    }

    std::sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i <n ; ++i) {
        ans = max(ans,a[i].second-i);

    }
    cout << ans << "\n";
    return 0 ;





}




