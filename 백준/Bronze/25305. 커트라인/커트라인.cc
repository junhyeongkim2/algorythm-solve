#include <bits/stdc++.h>

using namespace std;


int a,b;
vector<int>v1;


int main(){

    cin >> a>> b;

    for (int i = 0; i <a ; ++i) {
        int c;
        cin >> c;
        v1.push_back(c);
    }

    std::sort(v1.begin(), v1.end(),greater<int>());

    cout << v1[b-1];


}






