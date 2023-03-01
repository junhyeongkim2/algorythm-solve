#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> island(101);

bool comp(vector<int> a , vector<int> b){
    return a[2] < b[2];    
}


int findparent(int x){
    if(island[x] == x){
        return x;
    }
    return island[x] = findparent(island[x]);
}


int solution(int n, vector<vector<int>> costs) {
    
    int answer =0 ;
    
    for(int i = 0 ; i < n ; i ++){
        island[i] = i ;
    }
    
    sort(costs.begin(),costs.end(),comp);
    
    for(int i = 0 ; i < costs.size(); i++){
        
        int start = findparent(costs[i][0]);
        int end = findparent(costs[i][1]);
        int cost = costs[i][2];
        
        if(start!=end){
            answer+=cost;
            island[start]=end;
        }
    }

    return answer;
}