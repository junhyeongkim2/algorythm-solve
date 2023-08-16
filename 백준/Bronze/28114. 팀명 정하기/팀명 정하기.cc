#include <bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    vector<pair<int,string>>v;
    vector<string>v2;



    for(int i = 0 ; i < 3; i++){
        int a, b; string c;
        int em;

        cin >> a >> b>> c;
        v.push_back({a,c});
        em = b%100;
        v2.push_back(to_string(em));
    }

    sort(v2.begin(),v2.end());
    sort(v.begin(),v.end(),greater<>());

    string ans1 = "";
    for(int i = 0 ; i < 3; i++){
        ans1+= v2[i];
    }
    cout << ans1 << "\n";

    string ans2 = "";
    for(int i = 0 ; i < 3; i++){
        ans2+= v[i].second[0];
    }

    cout << ans2 << "\n";



}

