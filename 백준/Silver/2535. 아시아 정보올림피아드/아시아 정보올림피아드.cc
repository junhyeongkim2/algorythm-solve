#include <bits/stdc++.h>
using namespace std;


bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>>b ){
    return a.second.second > b.second.second;
}

map<int,int>m;

int main(){
    int n;

    cin >> n;

    vector<pair<int,pair<int,int>>> v;

    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        v.push_back({a,{b,c}});
    }

    sort(v.begin(),v.end(),comp);

    int number=1;

    vector<pair<int,int>>answer;

    for(int i = 0 ; i < v.size(); i++){
        if(m[v[i].first] < 2 && number <= 3){
            m[v[i].first]++;
            answer.push_back({v[i].first,v[i].second.first});
            number++;
        }
    }

    for(auto x : answer){
        cout << x.first << " " << x.second << "\n";
    }













}