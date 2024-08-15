#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    
    if(s.length() % 2 == 0){
        string temp = "";
        int right = s.length()/2;
        int left = right-1;
        
        cout << left << " " << right << "\n";
        
        temp+= s[left];
        temp+= s[right];
        
        return temp;
    }
    
    string temp = "";
    temp+=s[s.length()/2];
    
    return temp;
}