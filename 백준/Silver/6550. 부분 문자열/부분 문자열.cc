#include<bits/stdc++.h>
using namespace std;


int main() {

    string s, t;

    while(cin >> s >> t){

        int cnt = 0;
        int temp = 0;

        for(int i = 0; i < s.length(); i++){
            for(int j = temp; j < t.length(); j++){
                if (s[i] == t[j]){
                    temp = j+1;
                    cnt ++ ;
                    break;
                }
            }
        }

        if(cnt == s.size()){
            cout << "Yes" << "\n";
        }else{
            cout << "No" << "\n";
        }
    }


}
