#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    
    vector<int> answer(numbers.size());
    stack<pair<int,int>> st;
    
    
    for(int i = 0 ; i < numbers.size(); i++){
        
        while(!st.empty()){
            
            if(st.top().first < numbers[i]){
                answer[st.top().second] = numbers[i];
                st.pop();
            }else{
                break;
            }
            
        }
        
        st.push({numbers[i],i});
    }
    
    while(!st.empty()){
        answer[st.top().second] = -1;
        st.pop();
    }
    
        
    return answer;
}