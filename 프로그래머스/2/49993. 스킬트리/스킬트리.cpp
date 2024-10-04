#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    vector<char> v;
    
    
    
    
    
    for(int i = 0 ; i < skill_trees.size(); i++){
        string currentSkill = skill_trees[i];
        
        for(int i = skill.length()-1 ; i >= 0; i--){
            v.push_back(skill[i]);
        }
        // cout << v.back() << "\n";
        
        
        bool flag = false;
        for(int j = 0 ; j < currentSkill.length(); j++){
            if (v.size() > 0 && v.back() == currentSkill[j] ){
                v.pop_back();
            }else if(find(v.begin(),v.end(), currentSkill[j]) != v.end()){
                flag = true;
                break;
            }
        }
        
        if(!flag){
            answer++;
        }
        
        
    }
    
    
    
    return answer;
}