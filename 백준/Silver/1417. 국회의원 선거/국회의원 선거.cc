#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int,int>>v;
int ans=0;

int main(){
    cin >> n;

    for (int i = 1; i <=n ; ++i) {
        int a;
        cin >> a;
        v.push_back({a,i});
    }

    while(true){
        std::sort(v.begin(), v.end(),greater<>());

        if(v[0].second==1){
            cout << ans;
            break;
        }else{
            v[0].first -=1;
            ans++;
            for (int i = 0; i <v.size() ; ++i) {
                if(v[i].second==1){
                    v[i].first+=1;
                }
            }
        }


    }




}
