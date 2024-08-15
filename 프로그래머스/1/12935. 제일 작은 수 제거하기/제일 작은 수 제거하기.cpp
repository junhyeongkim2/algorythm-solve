#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    
    
    auto it = min_element(arr.begin(),arr.end());
    
    arr.erase(it);
    
    
    vector<int> answer = arr;
    
    if(answer.size()==0){
        return {-1};
    }
    
    return answer;
}