#include <bits/stdc++.h>

using namespace std;

char s[256];

int main() {

    while(true){

        int ans = 0;
        cin.getline(s,256);
        if(s[0]=='#')break;
        for (int i = 0; i <strlen(s) ; ++i) {
            if(s[i]=='a')ans++;
            if(s[i]=='e')ans++;
            if(s[i]=='i')ans++;
            if(s[i]=='o')ans++;
            if(s[i]=='u')ans++;
            if(s[i]=='A')ans++;
            if(s[i]=='E')ans++;
            if(s[i]=='I')ans++;
            if(s[i]=='O')ans++;
            if(s[i]=='U')ans++;



        }

        cout << ans <<"\n";


    }








}













