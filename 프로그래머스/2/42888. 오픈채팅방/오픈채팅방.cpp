#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {
    
    
    map<string, string> names;
    vector<pair<string,string>> events;
    
    for(int i = 0 ; i < record.size(); i++){
        
        istringstream ss(record[i]);
        string subs1;
        vector<string> v;
        
        string command;
        string uid;
        string name;
        
        int stringIndex = 0;
        
        while(getline(ss,subs1, ' ')){
            if(stringIndex == 0){
                command = subs1;    
            }
            if(stringIndex == 1){
                uid = subs1;
            }
            if(stringIndex == 2){
                name = subs1;
            }
            stringIndex ++;
        }
        
//         cout << command << "\n";
//         cout << uid << "\n";
//         cout << name << "\n";
//         cout << "\n";
        
        
        if(command != "Leave"){
            names[uid] = name;        
        }
        
        if(command != "Change"){
            events.push_back({command,uid});    
        }

    }
    
    
    vector<string> answer;
    
    for(int i = 0 ; i < events.size(); i++){
        // cout << events[i].first << " " << events[i].second << "\n";
        
        if(events[i].first == "Enter"){
            answer.push_back(names[events[i].second] +"님이 들어왔습니다.");
        }
        if(events[i].first == "Leave"){
            answer.push_back(names[events[i].second]+"님이 나갔습니다.");
        }
    }

    
    
    
    
    
    
    
    
    
    return answer;
}