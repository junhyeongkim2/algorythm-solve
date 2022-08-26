#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int N , L;

vector<int>graph;

int main(){

    cin >> N >> L;

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        graph.push_back(a);
    }
    std::sort(graph.begin(), graph.end());

    for (int i = 0; i <N ; ++i) {
        if(L>=graph[i]){
            L+=1;
        }
    }
    cout << L ;






}
