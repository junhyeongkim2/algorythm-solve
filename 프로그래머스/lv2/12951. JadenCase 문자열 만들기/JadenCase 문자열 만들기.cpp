#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string s) {
    
    bool flag = true;
    
    
    
    for(int i = 0 ; i < s.size(); i++){
        
        
        if(flag == false){
            if(s[i] >='A' && s[i] <='Z'){
                s[i] = char(s[i] + 32);
            }
        }
        
        
        if(flag == true){
            if ( (s[i] >= 'a' && s[i] <= 'z')){
                s[i] = char(s[i] - 32);
            }
            flag=false;
        }
        
        if(flag == false && s[i] == ' '){
            flag = true;
        }

        
        
    }
    
    cout << s << "\n";
    
    
    
    string answer =s;
    return answer;
    
}