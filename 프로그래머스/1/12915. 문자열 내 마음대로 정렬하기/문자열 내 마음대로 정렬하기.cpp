#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int sn;



bool comp(string a, string b){
    
    if(a[sn] == b[sn]){
        return a < b;
    }

    return a[sn] < b[sn];    
}



vector<string> solution(vector<string> strings, int n) {
    sn = n;
    sort(strings.begin(), strings.end(), comp);
    
    vector<string> answer;
    
    answer = strings;
    
    
    
    return answer;
}