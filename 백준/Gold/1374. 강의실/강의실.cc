#include <bits/stdc++.h>
using namespace std;


vector<pair<long long int,pair<long long int, long long int>>> v;

bool comp(pair<long long int,pair<long long int,long long int>>a,pair<long long int ,pair<long long int, long long int>>b){


    if(a.second.first == b.second.first){
        return a.second.second < b.second.second;
    }

    return a.second.first < b.second.first;

}

int main(){

    int n;

    cin >> n;

    for(int i = 0 ; i < n; i ++){
        long long int  a, b, c;
        cin >> a >> b>> c;
        v.push_back({a,{b,c}});
    }

    sort(v.begin(),v.end(),comp);

//    for(auto x : v){
//
//        //cout  << x.first << " " << x.second.first << " " << x.second.second << "\n";
//
//    }


    priority_queue<long long int,vector<long long int>,greater<>> pq;


    int count = 1;
    int maxcnt=0;

    for(int i = 0 ; i < v.size(); i++){


        if(pq.empty()){
            pq.push(v[i].second.second);
        }else{
            if ( v[i].second.first < pq.top()){
                count++;
            }else{
                pq.pop();
            }
            pq.push(v[i].second.second);
        }



        maxcnt = max(maxcnt,count);
        //cout << pq.top() << " " << count << "\n";

    }


    cout << maxcnt << "\n";

















}