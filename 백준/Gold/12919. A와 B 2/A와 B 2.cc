#include<cstdio>
#include<bits/stdc++.h>
using namespace std;


string s,t;
bool check = false;

void dfs(string now){


    //cout << now <<"\n";
    if(now == s){
        check=true;
        return;
    }

    if(now.length()<=s.length()){
        return;
    }

    if(now[now.length()-1]=='A'){
        string temp = now;
        temp.erase(now.length()-1);
        dfs(temp);

    }
    if(now[0]=='B'){
        string temp = now;
        temp.erase(temp.begin());
        reverse(temp.begin(),temp.end());
        dfs(temp);
    }


}



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> s >> t;



    dfs(t);


    if(check)cout<<1<<"\n";
    else cout<<0<<"\n";


    return 0;
}