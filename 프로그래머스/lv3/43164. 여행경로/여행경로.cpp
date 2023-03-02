#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> ticket;
int visited[10001];
vector<string> answer;

bool flag = false;

void dfs(string start, int ticketcnt){
    

    if(ticketcnt == ticket.size()){
        flag =true;
        return;
    }


    for(int i = 0 ; i < ticket.size(); i++){
        if (ticket[i][0] == start ){
            
            if(visited[i]==0){
                visited[i] = 1;
                answer.push_back(ticket[i][1]);
                cout << start << "\n";
                dfs(ticket[i][1],ticketcnt+1);    
                
                   if(!flag){
                    visited[i]=0;
                    answer.pop_back();
                }
            }
            
        }
        
     
        
        
    }
    
    
}


vector<string> solution(vector<vector<string>> tickets) {
    
    
    ticket = tickets;
    
    sort(ticket.begin(),ticket.end());
    
    answer.push_back("ICN");
    
    dfs("ICN",0);
    
    

    
    
    
    return answer;
}