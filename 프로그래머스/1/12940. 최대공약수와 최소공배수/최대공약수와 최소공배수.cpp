#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    
    if(a%b ==0){
        return b;
    }
    
    return gcd(b,a%b);
}

int lcm(int a, int b){
    return a * b / gcd(a,b);
}



vector<int> solution(int n, int m) {
    
    cout << gcd(n,m);
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));
    
    return answer;
}