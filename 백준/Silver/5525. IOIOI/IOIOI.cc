#include<bits/stdc++.h>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int m;
    string s;

    string temp;
    cin >> n;
    cin >> m;
    cin >> s;

    for(int i = 0 ; i <n;i++){
        temp +='I';
        temp +='O';
    }
    temp+='I';

    //cout << temp <<"\n";

    string temp2;
    int cnt = 0;
    for(int i = 0 ; i < m; i++){
        temp2 = s.substr(i,temp.size());
        if(temp2 == temp){
            cnt ++;
        }
    }

    cout << cnt <<"\n";











}
