#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int arr[500000];

int main(){
    cin >> n;

    long long int sum =0 ;
    for (int i = 0; i <n ; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr,arr+n);
    long long int ans =0;

    for (int i = 0; i <n ; ++i) {
        sum-=arr[i];
        ans += sum * arr[i];

    }
    cout << ans ;










}