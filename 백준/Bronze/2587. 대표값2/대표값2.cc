#include <bits/stdc++.h>

using namespace std;

int arr[5];

vector<int>arr1;
vector<int>arr2;

int main(){


    int sum=0;
    for (int i = 0; i <5 ; ++i) {
        int a;
        cin >> a;
        sum+=a;
        arr1.push_back(a);
        arr2.push_back(a);
    }

    std::sort(arr2.begin(), arr2.end());


    cout <<sum/5 << "\n";
    cout << arr2[2];










}






