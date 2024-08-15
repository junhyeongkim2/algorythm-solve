#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string phone_number) {
    
    
    for(int i = 0 ; i < phone_number.size()-4; i++){
        phone_number[i] = '*';
    }
    
    
    
    
    string answer = phone_number;
    return answer;
}