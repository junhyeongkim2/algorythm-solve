#include<cstdio>
#include<bits/stdc++.h>
using namespace std;


int n;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;



    while(n--){
        int ans =0;
        map<int,bool>m;
        string s;
        cin >> s;

        for(int i=0;i<s.size();i++){
            m[s[i]-'0'+48]=true;
        }

        for(int i=65;i<=90;i++){
            if(m[i]==false){
                ans+=i;
            }
        }
        cout << ans << "\n";


    }










    return 0;


}