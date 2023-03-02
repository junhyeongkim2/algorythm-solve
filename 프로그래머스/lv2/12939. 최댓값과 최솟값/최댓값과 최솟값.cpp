#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int>v;

string solution(string s) {
    
    string temp="";
    
    for(int i = 0 ; i < s.size(); i++){
        
        if(s[i]!=' '){
            temp+=s[i];
        }else{
            v.push_back(stoi(temp));
            cout << stoi(temp)<<"\n";
            temp.clear();
        }
        
    }
    v.push_back(stoi(temp));
    cout << stoi(temp)<<"\n";
    
    
    sort(v.begin(),v.end());
    
    cout << "\n";    

    string answer;
    answer =  to_string(v[0])  + " " + to_string(v[v.size()-1]);
    

    return answer;   
}