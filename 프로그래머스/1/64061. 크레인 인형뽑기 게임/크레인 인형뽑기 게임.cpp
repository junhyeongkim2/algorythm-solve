#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    stack<int> s;
    
    
    
    for(int i = 0 ; i < moves.size(); i++){
        
        int currentX = moves[i];
        
        for(int y = 0; y < board.size(); y++){
            
            if(board[y][currentX-1] != 0){
                
                if(!s.empty() && s.top() == board[y][currentX-1]){
                    s.pop();
                    answer++;
                    answer++;
                }else{
                    s.push(board[y][currentX-1]);    
                }
                
    
                board[y][currentX-1] = 0;
                break;
            }
            
        }
        
        
        
        
        
        
        
    }
    
    
    
    
    
    return answer;
}