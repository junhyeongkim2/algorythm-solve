#include <bits/stdc++.h>

using namespace std;

int n;

vector<pair<int,int>>v;

bool comp(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i <n ; ++i) {
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    std::sort(v.begin(), v.end(),comp);

    int now = v[0].second - v[0].first;

    for (int i = 1; i <n ; ++i) {
        int a = v[i].first;
        int b= v[i].second;
        if(now>=b){
            now = b-a;
        }else if(now<b){
            now = now - a;
        }
    }

    cout << now <<"\n";

}