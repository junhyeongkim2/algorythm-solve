#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    
    
    vector<int> answer;
    
 queue<int>q1 ;
    for(int i = 0 ; i < progresses.size();i++){
        
        if((100-progresses[i])%speeds[i]==0){
                q1.push((100 - progresses[i] ) / speeds[i]);
        }else{
                q1.push(((100 - progresses[i] ) / speeds[i])+1   );
        }
    
    }
    
    int count = 1;
    int a = q1.front();
    //cout << q1.front()<< "\n";
    q1.pop();
    for(int i=0;i<progresses.size()-1;i++){
        //cout << q1.front()<<  "\n";
        if(q1.front() <= a ){
            //cout << q1.front()<<"\n";
            q1.pop();
            count++;
            
        }else{
            answer.push_back(count);
            a = q1.front();
            q1.pop();
            count=1;
        }   
    }    
    answer.push_back(count);
    
    
    return answer;
}