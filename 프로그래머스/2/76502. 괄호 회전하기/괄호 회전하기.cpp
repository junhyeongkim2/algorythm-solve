#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    deque<char> st;
    
    for(int i = 0 ; i < s.length(); i++){
        st.push_back(s[i]);
    }
    
    
    for(int i = 0 ; i < st.size(); i++){
        stack<char> temp;
        
        int matchedCount = 0;
        
        for(int j = 0 ; j < st.size(); j++){
            
            if(st[j] == '[' || st[j] == '(' || st[j] == '{') temp.push(st[j]);
            
            if(temp.size()>0 && st[j] == ']' && temp.top() == '['){
                matchedCount++;
                temp.pop();
            }
            
            if(temp.size()>0 && st[j] == ')' && temp.top() == '('){
                matchedCount++;
                temp.pop();
            }
            
            if(temp.size()>0 && st[j] == '}' && temp.top() == '{'){
                matchedCount++;
                temp.pop();
            }
        }
        
        if(matchedCount * 2 == st.size()){
            answer++;
        }
        
        
        char c = st.front();
        cout << st.front() << "\n";
        st.pop_front();
        st.push_back(c);
        
    }
    
    
    
    
    //회전시키는 로직
    //회전시킨 결과물에서 올바른 괄호가 몇개인지 세기
    //스택 두개를 써서 회전 시킨 결과물 한개, 그 결과물 한개씩 넣어서 검증할 스택 한개
    
    
    
    
    
    

    
    
    return answer;
}