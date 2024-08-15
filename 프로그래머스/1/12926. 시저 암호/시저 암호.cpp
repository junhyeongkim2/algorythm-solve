#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


char charPushByNumber(char c, int n){
    
    cout << c -'0' << "\n";
    
    int charNumber = c - '0';
    
    if(charNumber >= 17 && charNumber <= 42){
        charNumber += n;
        
        if(charNumber > 42){
            int diff = charNumber - 42;
            charNumber = 17 + diff-1;
        }
        
        
        
    }
    if(charNumber >= 49 && charNumber <= 74){
        charNumber += n;
        if(charNumber > 74){
            int diff = charNumber - 74;
            charNumber = 49 + diff-1;
        }
    }
    
    
    return charNumber+'0';
}


string solution(string s, int n) {
    
    string answer = "";    
    // 17 ~ 42, A~Z
    // 49 74, a~z
    
    for(int i = 0 ; i < s.length(); i++){
        answer += charPushByNumber(s[i],n);
            
        
    }


    
    
    
    return answer;
}