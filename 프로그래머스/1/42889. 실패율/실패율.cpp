#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool comp(pair<double,int> a, pair<double,int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first > b.first;
    
}

vector<int> solution(int N, vector<int> stages) {
    
    
    vector<pair<double,int>>fails;
    sort(stages.begin(),stages.end());
    
    int survivorCount = stages.size() ;
    
    for(int i = 1; i <= N; i++){
        int failCount = 0;
        
        for(int j = 0 ; j < stages.size(); j++){
            
            if(i == stages[j]){
                failCount++;
            }
            
        }
        
        cout << failCount << " / " << survivorCount  << "\n";
        
        if(survivorCount == 0){
                    fails.push_back({0,i});    

        }else{
                    fails.push_back({(double) ((double)failCount  / (double)survivorCount) * 100,i});    

        }
          

        survivorCount -= failCount;
        

        
        if(survivorCount < 0){
            survivorCount = 0;
        }
        
    }
    
    
    sort(fails.begin(),fails.end(),comp);

    vector<int> answer;
    
    for(int i = 0 ; i < fails.size(); i++){
        cout << fails[i].first << " " << fails[i].second << "\n";
        answer.push_back(fails[i].second);
    }

    
    
    return answer;
}