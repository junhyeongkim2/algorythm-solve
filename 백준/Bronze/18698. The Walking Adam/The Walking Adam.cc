#include <iostream>

using namespace std;


int n;
string s;

int main(){
    cin >> n;

    for(int i = 0 ; i < n;i++){
        int cnt=0;
        cin >> s;
        for(int i = 0 ; i <s.length();i++){
            if(s[i]=='U'){
                cnt++;
            }else
                break;


        }
        cout << cnt<<"\n";


    }

}