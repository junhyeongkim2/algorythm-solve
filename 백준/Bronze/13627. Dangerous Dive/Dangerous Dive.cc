#include <bits/stdc++.h>

using namespace std;

int n, r;

int arr[10001];
vector<int> ans;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> r;

    for (int i = 0; i < r; i++) {
        int idx;
        cin >> idx;
        arr[idx] = 1;
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] == 0) {
            ans.push_back(i);
        }
    }

    sort(ans.begin(),ans.end());

    if(ans.size()==0){
        cout << "*";
    }else{
        for(auto x : ans){
            cout << x << " ";
        }
    }








}