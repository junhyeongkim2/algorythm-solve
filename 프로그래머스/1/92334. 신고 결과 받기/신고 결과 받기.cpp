#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    
    unordered_map<string, int> reports;
    map<string, vector<string>> report_list;
    
    map<pair<string,string>,int> visited;

    
    for(int i = 0 ; i < report.size(); i++){
        stringstream ss(report[i]);
        string firstName;
        string secondName;
        
        ss >> firstName >> secondName;
        
        if(visited[{firstName,secondName}] == 0){
            reports[secondName]++;    
            report_list[firstName].push_back(secondName);
        }
        
        visited[{firstName,secondName}] = 1;
        
    }
    
    vector<int> answer;
    
    for(int i = 0 ; i < id_list.size(); i++){
        int count = 0;
        for(int j = 0; j < report_list[id_list[i]].size(); j++){
            if ( reports[report_list[id_list[i]][j]] >=k ) {
                count++;
            }
        }
        answer.push_back(count);      
    }
    
    return answer;
}