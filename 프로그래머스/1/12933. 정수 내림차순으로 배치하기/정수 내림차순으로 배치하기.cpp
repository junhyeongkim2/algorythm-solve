#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    
    vector<long long> v;
    
    
    while(n>0){
        int value = n % 10;
        n/=10;
        v.push_back(value);

        
    }
    
    sort(v.begin(),v.end(),greater<>());
    
    string s = "";
    for(int i = 0 ; i < v.size(); i++){
        s += to_string(v[i]);  
        
    }
    
    return stoll(s);

}