#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool isPossible(map<string,int> check, vector<string>want, vector<int>number){
    
    for(int i = 0 ; i < want.size(); i++){
        if(check[want[i]] != number[i] ){
            return false;
        }
        
    }
    return true;
    
}



int solution(vector<string> want, vector<int> number, vector<string> discount) {
    
    //banana = 4
    //apple = 4
    //rice = 2
    //pork = 2
    //pot = 1
    
    //banana = 3
    //apple = 2
    //rice = 2
    //pork = 2
    //pot = 1
    
    map<string,int> wants;
    int answer = 0;

    
    for(int i = 0; i < want.size(); i++){
        wants[want[i]] = number[i];
    }
    
    
    for(int i = 0 ; i < discount.size(); i++){
        map<string,int> check;
        
        for(int j = i ; j < i+10 && j < discount.size(); j++){
            check[discount[j]]++;
        }
        
        if(isPossible(check,want,number)){
            answer++;
        }

    }
    
    

    
    return answer;
}