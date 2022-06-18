#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {

    queue<pair<int,char>>q1;
    priority_queue<int,vector<int>>q2;
    vector <int>v1 ;
    v1=priorities;
    sort(v1.begin(),v1.end());

    for(int i = 0 ; i < priorities.size();i++){
        q1.push(make_pair(priorities[i] , i));
        q2.push(priorities[i]);
    }


    int count=1;

    while( q1.size()>0 && q2.size()>0){
        int max = q2.top();
        if(max > q1.front().first){
            pair<int,char>a = q1.front();
            q1.pop();
            q1.push(a);
        }else{
            if(q1.front().second == location){
                return count;
            }
            q1.pop();
            q2.pop();
            
            count++;

        }
    }

}