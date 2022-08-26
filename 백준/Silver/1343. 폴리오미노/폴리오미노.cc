#include <iostream>
using namespace std;

string s;
int cnt = 0 ;
string result;

bool check = false;
int main(){
    cin >> s;

    s+=" ";

    for (int i = 0; i <s.length()-1 ; ++i) {
        if(s[i]=='X'){
            cnt++;
        }else if(s[i]=='.'){
            result+=".";
            if(cnt%2!=0){
                break;
            }else{
                cnt=0;
            }

        }
        if(cnt==4){
            result += "AAAA";
            cnt=0;
        }
        if(cnt==2 && s[i+1]!='X'){
            result+="BB";
            cnt = 0 ;
        }
    }

    if(cnt%2==1){
        cout << -1;
    }else{
        cout << result;
    }


}