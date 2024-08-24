#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

map<string,string> parent;
map<string,int> gain;

void updateGain(string now, int profit){
        
    
    if(now == "-"){
        // cout << "- : " << profit << "\n";
        return;
    }

    int calculatedGain = profit * 0.1;
    gain[now] += profit - calculatedGain;
    
    // cout << now << " " << profit - calculatedGain << "\n";
    if(profit == 0){
        return;
    }
    
    

    updateGain(parent[now],calculatedGain);
}


vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
    
    vector<int> answer;
    
    for(int i = 0 ; i < enroll.size(); i++){
        parent[enroll[i]] = referral[i];
    }
    
    
    for(int i = 0 ; i < seller.size(); i++){
        // cout << "start -> " << "\n";
        updateGain(seller[i],amount[i] * 100);
        // cout << "\n";
    }
    
    for(int i = 0 ; i < enroll.size(); i++){
        answer.push_back(gain[enroll[i]]);
    }
        
    
    
    return answer;
}