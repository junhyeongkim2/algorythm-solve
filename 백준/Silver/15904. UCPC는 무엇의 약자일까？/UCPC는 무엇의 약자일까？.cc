#include <bits/stdc++.h>

using namespace std;
string s;

int main(){

    getline(cin,s);

    int cnt =0 ;

    for (int i = 0; i <s.size(); ++i) {
        if (s[i] == 'U' && cnt==0){
            cnt++;
        }else if(s[i]=='C'&&cnt==1){
            cnt++;
        }
        else if(s[i]=='P'&&cnt==2){
            cnt++;
        }
        else if(s[i]=='C'&&cnt==3){
            cnt++;
        }
    }

    //cout << cnt << "\n";
    if(cnt==4){
        cout << "I love UCPC";
    }else{
        cout << "I hate UCPC";
    }




}