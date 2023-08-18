#include <bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int n;
    int cnt=0;
    cin >> n;
    vector<int>seq;
    vector<int>v;
    vector<char>ans;


    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        seq.push_back(a);
    }

    for(int i = 1; i<=n; i++){
        v.push_back(i);
        ans.push_back('+');
        while(!v.empty() && v.back()==seq[cnt]){
            ans.push_back('-');
            v.pop_back();
            cnt++;
        }
    }


    if(!v.empty()){
        cout << "NO";
    }else{
        for(int i= 0; i < ans.size(); i++){
            cout << ans[i]<<"\n";
        }
    }






}

