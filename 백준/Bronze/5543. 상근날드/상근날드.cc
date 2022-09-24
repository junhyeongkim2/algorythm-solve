#include <bits/stdc++.h>
using namespace std;


int arr[6];

vector<int>v1;
vector<int>v2;
int main(){


    for (int i = 0; i < 3; ++i) {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    for (int i = 0; i <2 ; ++i) {
        int a;
        cin >> a;
        v2.push_back(a);
    }



    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());

    cout << (v1[0] + v2[0] - 50);





















}