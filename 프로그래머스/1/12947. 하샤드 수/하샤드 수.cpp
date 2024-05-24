#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool solution(int x) {
    
    
    
    string s = to_string(x);
    int sum = 0;
    
    
    for(int i = 0 ; i < s.length(); i++){
        sum += s[i] - '0';
    }
    
    bool answer = true;
    
    cout << sum << "\n";
    
    cout << (x % sum) << "\n";
    
    if(x % sum == 0){
        answer = true;
    }
    if(x % sum != 0){
        answer = false;
    }
    
    
    return answer;
}