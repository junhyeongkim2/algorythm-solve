#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;


bool comp(string a, string b){
    
    if(a+b > b+a){
        return true;
    }
    return false;
    
}


string solution(vector<int> numbers) {
    
 
    vector<string>vs;
    for(auto x : numbers){
        vs.push_back(to_string(x));
    }
    
    sort(vs.begin(),vs.end(),comp);
    
    string ans = "";
    for(auto x : vs){
        ans += x;
    }
    
    
    if(vs[0]=="0"){
        return "0";
    }else return ans;
    
    
 
}