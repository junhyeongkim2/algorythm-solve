#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
map<string,int>m;



bool comp(pair<string,int> a, pair<string,int> b){
    
    if(a.first == b.first){
        return a.second > b.second;
    }
    
}
bool comp2(pair<int,int> a, pair<int,int> b){
    
    if(a.first != b.first){
        return a.first > b.first;
    }else{
        return a.second < b.second;
    }
    
}

vector<int> solution(vector<string> genres, vector<int> plays) {
        
    for(int i = 0 ; i < genres.size();i++){
        m[genres[i]] += plays[i];
    }
    
    vector<pair<string,int>> v(m.begin(), m.end());
    
    sort(v.begin(),v.end(),comp);
    
    vector<pair<int,int>>playsindex;
    
    for(int i = 0 ; i < plays.size(); i++){
        playsindex.push_back({plays[i],i});
    }
    
    sort(playsindex.begin(),playsindex.end(),comp2);
    
    vector<int>ans;
    
    for(int i = 0 ; i < v.size();i++){
        int cnt = 0;
        for(int j = 0 ; j < playsindex.size();j++){
            if (v[i].first == genres[playsindex[j].second] && cnt<2 ){
                ans.push_back(playsindex[j].second);
                cnt++;
            }
        }
    }
    
    cout << "---------------------------------------------" <<"\n";
    for(auto x : v ){
        cout << x.first << " : " << x.second << "\n";
    }
    
    cout << "---------------------------------------------" << "\n";

    for(auto x : playsindex ){
        cout << x.first << " : " << x.second << "\n";
    }
    cout << "---------------------------------------------" << "\n";
    
      for(auto x : ans ){
        cout << x  << "\n";
    }
    cout << "---------------------------------------------" << "\n";
    
    return ans;
}
