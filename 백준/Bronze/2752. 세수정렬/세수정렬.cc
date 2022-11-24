#include <bits/stdc++.h>
using namespace std;


int a ;

vector<int>v1;




int main() {


    for (int i = 0; i <3 ; ++i) {
        cin >> a;
        v1.push_back(a);
    }

    std::sort(v1.begin(), v1.end());

    for (int i = 0; i <3 ; ++i) {
        cout << v1[i] << " ";

    }











}




