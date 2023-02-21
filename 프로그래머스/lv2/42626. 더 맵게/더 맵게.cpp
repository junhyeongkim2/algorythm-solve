#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;



int solution(vector<int> scoville, int K) {
    
    priority_queue<int,vector<int>,greater<>> pq;
    
    for(auto x : scoville){
        pq.push(x);
    }
    
    int cnt=0;
    
    
    while(pq.top()<K){
        //cout << pq.top() << "\n";
        cnt ++;
        
        
        if(pq.size()<2){
            return -1;
            break;
        }
        
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a + (b*2));
        
    }
    

    
    
    
    int answer = cnt;
    return answer;
}