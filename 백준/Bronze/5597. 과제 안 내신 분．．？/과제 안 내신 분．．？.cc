#include <bits/stdc++.h>

using namespace std;


int arr[29];
int main() {

    int a;
    for (int i = 0; i <28 ; ++i) {
        cin >> a;
        arr[a]++;
    }

    vector<int>v1;

    for (int i = 1; i <= 30; ++i) {
        if(arr[i]==0){
            v1.push_back(i);
        }
    }

    std::sort(v1.begin(), v1.end());

    cout << v1[0]<<"\n" << v1[1];
















}













