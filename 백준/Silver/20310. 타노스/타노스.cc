#include <bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    string s;
    cin >> s;

    vector<int>v;

    for(int i = 0 ; i < s.length(); i++){
        v.push_back(s[i]-'0');
    }

    sort(v.begin(),v.end());


    auto it = lower_bound(v.begin(),v.end(),0) - v.begin();
    auto it2 = upper_bound(v.begin(),v.end(),0) - v.begin();

    auto it3 = lower_bound(v.begin(),v.end(),1) - v.begin();
    auto it4 = upper_bound(v.begin(),v.end(),1) - v.begin();


//    for(auto x : v){
//        cout << x << " ";
//    }
//    cout << "\n";


//    cout << it2-it << "\n";
//
//    cout << it4-it3 << "\n";


    for(int i = 0 ; i < (it2-it)/2; i++){
        cout <<"0";
    }

    for(int i = 0 ; i < (it4-it3)/2; i++){
        cout <<"1";
    }











}

