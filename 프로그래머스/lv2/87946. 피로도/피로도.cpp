#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    
    vector<pair<int,int>>v;
        
    map<int,int>m;
    
    for(int i = 0 ; i < dungeons.size(); i++){
        v.push_back({dungeons[i][1],dungeons[i][0]});
    }
    
    int ans = 0;    
    sort(v.begin(),v.end());
    
    do{
        
        int temp = k;
        int maxdungeon = 0;
        
    for(int i = 0 ; i < v.size();i++){
        if(temp>=v[i].second){
            //cout << m[v[i]] << " " << v[i] << " " <<  temp << "\n";
            temp-=v[i].first;
            maxdungeon++;
            ans = max(maxdungeon,ans);

        }else{
            break;
        }
        
    } 
        //cout << "\n";
    }while(next_permutation(v.begin(),v.end()));
    //cout << ans << "\n";
    int answer = ans;
    
    return answer;
    
}