#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    
    
    vector<int> answer;
    
        
    reverse(s.begin(),s.end());
    

    
    for(int i = 0 ; i< s.length(); i++){
                
        auto it = s.find(s[i],i+1);
        
        
        if(it - i >= s.length()){
            answer.push_back(-1);
        }else{
            answer.push_back(it - i);
        }
        
        

    }
    
    reverse(answer.begin(),answer.end());
    
    
    
    return answer;
}