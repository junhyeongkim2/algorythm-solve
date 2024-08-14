#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int findGameTime(vector<vector<int>> attacks){
    return attacks[attacks.size()-1][0];
    
}


int* findAttackTime(vector<vector<int>> attacks){
    static int attackTime[1001];
    
    for(int i = 0; i < attacks.size(); i++){
        attackTime[attacks[i][0]] = attacks[i][1];
    }
    return attackTime;
}





int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    
    int gameTime = findGameTime(attacks);
    int* attackTime = findAttackTime(attacks);
    int maxHealth = health;
    
    
    
    int count = 0;
    
    for(int time = 0 ; time <= gameTime; time++){
        
        if(attackTime[time] > 0){
            health -= attackTime[time];
            count = 0;
            cout << time << " " <<  health << " " << count << " " << "O"  <<"\n";
            
            if(health <= 0){
                return -1;
            }
            

            continue;
        }
        
        count++;

        if(count >= bandage[0]){
            health += bandage[2];
            count = 0;
        }
        
        health += bandage[1];
        
        if(health >= maxHealth){
            health = maxHealth;
        }
        
        cout << time << " " <<  health << " " << count << " " << "X"  <<"\n";        
        
    }
    
    

    int answer = health;
    
    if(answer<=0){
        return -1;
    }
    
    

    return answer;
}