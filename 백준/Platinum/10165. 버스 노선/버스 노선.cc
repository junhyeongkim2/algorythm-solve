#include <bits/stdc++.h>
using namespace std;

vector<int>res;


bool cmp(vector<int> &l,vector<int> &r){

    if(l[0] == r[0]){
        return l[1] > r[1];
    }
    return l[0] < r[0];
}

bool cmpnum(vector<int>&l,vector<int>&r) {
    return l[2] < r[2];
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    vector<vector<int>>v(m,vector<int>(3));

    int circlemax = 0;

    for(int i = 0 ; i < m; i ++){
        cin >> v[i][0] >> v[i][1];
        if(v[i][0]>v[i][1]){
            circlemax = max(circlemax,v[i][1]);
            v[i][1] += n;
        }
        v[i][2] = i + 1;
    }

    sort(v.begin(),v.end(),cmp);
    vector<vector<int>>res;


    for(int i = 0 ; i < m; ++i){
        if(v[i][1] <= circlemax)
            continue;

        if(res.empty()||(res.size()&&res.back()[1] < v[i][1]))
            res.push_back(v[i]);
    }

    sort(res.begin(),res.end(),cmpnum);

    for(auto &t : res){
        cout << t[2] << ' ';
    }








    return 0;
}