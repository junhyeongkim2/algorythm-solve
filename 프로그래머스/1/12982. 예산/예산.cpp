#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    
    int answer = 0;
    
    sort(d.begin(),d.end());
    
    int totalMoney = 0;
    for(int i = 0; i < d.size(); i++){
        if(totalMoney + d[i] <= budget){
            totalMoney += d[i];
            answer++;
        }
    }
    
    
    return answer;
}