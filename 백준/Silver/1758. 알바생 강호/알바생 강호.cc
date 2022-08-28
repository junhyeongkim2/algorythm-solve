#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int N;

int arr[100000] ;

vector<int>v;
int main(){
    cin >> N;
    for (int i = 0; i <N ; ++i) {
        cin >> arr[i];
    }

    sort(arr,arr+N,greater<>());

    long long int ans =0;

    for (int i = 0; i < N; ++i) {
        if(arr[i]-i>0){
            ans += arr[i] - i;
        }
        //cout << v[i] << " - " << (i-1) << "\n";


    }
    cout << ans <<"\n";







}