#include <bits/stdc++.h>
using namespace std;



bool comp(pair<string,string>a, pair<string,string>b){


    if(a.first == b.first){
        return a.second > b.second;
    }

    return a.first < b.first;




}


int main(){

    int n;
    cin >> n;


    vector<pair<string,string>> v;

    for(int i = 0; i < n ; i++){
        string a,b;
        cin >> a >> b;

        v.push_back({a,b});

    }

    sort(v.begin(),v.end(),comp);


    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }





}