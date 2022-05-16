#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


bool compare(pair<int,string> a, pair<int,string> b){
    return a.first<b.first;
}

int main() {
    int N;
    cin >> N;

    pair <int,string> tmp;
    vector<pair<int,string>> p;
    for (int i = 0; i < N; i++) {
        cin >> tmp.first >> tmp.second;
        p.push_back(tmp);
    }
    stable_sort(p.begin(), p.end(),compare);


    for (auto i: p) {
        cout << i.first <<" "<<i.second <<'\n';



    }
}

