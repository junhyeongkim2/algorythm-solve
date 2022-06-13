#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX 300001
using namespace std;


int n , m ;

pair<int,int>jew[MAX];
int bag[MAX];
priority_queue<int,vector<int>,less<int>> q1;

long long solve(){

    sort(jew,jew+n);
    sort(bag,bag+m);
    int idx=0;
    long long answer=0;
    for(int i = 0 ;i<m;i++){
        while(idx<n&&bag[i]>=jew[idx].first){
            q1.push(jew[idx].second);
            idx++;
        }
        if(!q1.empty()){
            answer+=q1.top();
            q1.pop();
        }
    }

    return answer;

}


int main(){

    cin >> n >> m;

    for(int i = 0 ; i<n;i++){
        cin >> jew[i].first >> jew[i].second;
    }
    for(int i =0 ; i<m;i++){
        cin >> bag[i];
    }
    cout << solve();

}