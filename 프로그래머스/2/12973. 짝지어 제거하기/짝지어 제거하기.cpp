#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
   
    stack<char> st;
    st.push(s[0]);
    
    for(int i = 1; i < s.length(); i++){
        if(st.size()>0 && st.top() == s[i]){
            st.pop();
        }else{
            st.push(s[i]);    
        }        
    }
    
    if(st.size()==0){
        return 1;
    }
    
    return 0;
}