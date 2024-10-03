#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> topping) {
    
    int answer = 0;
    unordered_map<int,int> cake;
    unordered_map<int,int> base;
    
    for(auto x : topping){
        cake[x]++;
    }
    
    int size = cake.size();
    
    for(auto x : topping){
        
        base[x]++;
        cake[x]--;
        
        if(cake[x] == 0){
            size--;
        }
        
        if(size == base.size()){
            answer++;
        }
        
        
    }
 
    
    
    return answer;
}