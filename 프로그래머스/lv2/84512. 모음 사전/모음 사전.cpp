#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int cnt = 1;
vector<string> alpha = {"A","E","I","O","U"};
map<string,int> voca;

void dfs(string w){
    
    if(w.length()>5)return;
    voca[w] = cnt++;
    cout << w << "\n";
    for(auto s : alpha) dfs(w+s);
    
}

int solution(string word) {
    
    for(auto s : alpha) dfs(s);
    return voca[word];
    
}