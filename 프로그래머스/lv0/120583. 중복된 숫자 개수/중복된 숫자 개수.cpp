#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array, int n) {
    
    int result = 0;
    
    for(auto x : array){
        
        if( x == n){
            result++;
        }
        
    }
    
    
    
        
    
    int answer = result;
    return answer;
}