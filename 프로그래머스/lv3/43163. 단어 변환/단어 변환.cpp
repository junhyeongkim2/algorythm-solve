#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string>word_list;

int check[51];

int answer = 1e9;



void dfs(string begin,vector<string>word_list,string target,int index){
    
    if(begin == target ){
        answer = min(index,answer);
        cout << index<<"\n";
        return;
    }
    
    
    for(int i = 0 ; i < word_list.size(); i++){
        int cnt = 0;
        for(int j = 0 ; j < word_list[i].size();j++){
            if(begin[j] != word_list[i][j]){
                cnt++;
                if(cnt==2){
                    break;
                }
            }
        }
        if(cnt == 1){
            if(check[i]==0){
                check[i]=1;
                dfs(word_list[i],word_list,target,index+1);
                check[i]=0;
            }
        }
        
        
        
    }
    
    
    
}




int solution(string begin, string target, vector<string> words) {
    
    
    for(int i = 0 ; i < words.size(); i++){
        word_list.push_back(words[i]);
    }
    
    dfs(begin,word_list,target,0);
       
    
    if(answer==1e9){
        return 0;
    }else{
    return answer;    
    }
    
    
}