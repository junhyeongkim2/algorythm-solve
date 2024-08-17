#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, string letter) {
    
    
    while(my_string.find(letter) != string::npos){
        my_string.erase(my_string.find(letter),1);    
    }
    
    
    
    string answer = my_string;
    return answer;
}