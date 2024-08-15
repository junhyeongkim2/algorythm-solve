#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string t, string p) {

        
    unsigned long long intP = stoull(p);
    int answer = 0;
    
    
    
    
    for(int i = 0 ; i <= t.length() - p.length(); i++){
        string temp = t.substr(i,p.length());        
        unsigned long long intTemp = stoull(temp);

        if(intTemp <= intP){
            answer++;
        }
                                
    }
    
    return answer;
}

