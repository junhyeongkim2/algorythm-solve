#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int isPallendrom(string s, int left, int right){

    while(left >= 0 && right < s.length()){
        
        if(s[left] != s[right]) break;
        
        left--;
        right++;
        
    }
    
    
    return right - left - 1;
    
    
}


int solution(string s)
{
    
    int answer = 0;
    
    for(int i = 0; i < s.length(); i++){
        
        cout << i << "\n";
        int odd = isPallendrom(s,i,i);
        int even = isPallendrom(s,i-1,i);
                
        answer = max(answer, max(odd,even));
    
    }


    return answer;
}