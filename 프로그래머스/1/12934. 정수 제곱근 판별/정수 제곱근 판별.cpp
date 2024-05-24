#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    
    
    long long value = sqrt(n);
    
    if(pow(value,2) == n){
        return pow(value+1,2);
    }
    
    if(pow(value,2)!=n){
        return - 1;
    }
    

    return 0;
}