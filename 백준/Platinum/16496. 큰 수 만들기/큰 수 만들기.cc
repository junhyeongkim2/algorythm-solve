#include <bits/stdc++.h>
using namespace std;


int n;
vector<string>v;

bool comp(string a, string b){

    return a+b > b+a;

}




int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),comp);

    string ans ="";

    if(v[0]=="0"){
        cout << 0 << "\n";
        return 0;
    }


    for(int i = 0 ; i < n ; i ++){
        ans += v[i];
    }
    cout << ans << "\n";




    return 0;
}