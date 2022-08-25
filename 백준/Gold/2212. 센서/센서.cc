#include <bits/stdc++.h>
using namespace std;

int n;
int k ;

vector<long long>graph;
vector<long long>graph2;

int arr[10001];

vector<int>v;


int main(){

    cin >> n >> k;

    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
    }
    sort(arr,arr+n);

    for (int i = 0; i <n-1 ; ++i) {
        v.push_back(arr[i+1] - arr[i]);
        //cout << arr[i+1]-arr[i]<<"\n";
    }
    //cout << "\n";
    std::sort(v.begin(), v.end(),greater<>());

    int ans = 0;
    for (int i = k-1; i < v.size(); ++i) {
        //cout << v[i]<<"\n";
        ans+=v[i];

    }
    cout << ans<<"\n";



















}


