#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int now =0;

    if(s.size()%2==0){
        now = s.size();
    }else{
        now = s.size()-1;
    }


    if(s.size() == now){

        int sum1=0;
        int sum2=0;
        int minus = s.size()/2;
        for(int i = 0 ; i < s.size()-minus;i++){
            sum1+= s[i]-'0';
        }
        for(int i = minus ; i < s.size();i++){
            sum2+= s[i]-'0';
        }

        if(sum1==sum2){
            cout << now;
            return 0;
        }else{
            now-=2;
        }
    }

    while(now>0){
        for(int i = 0 ; i <= s.size()-now; i++){
            //cout << i << "\n";

            int sum1=0;
            int sum2=0;

            for(int j = i ; j < i+(now/2) ;j++){
                sum1 += s[j]-'0';
            }
            for(int j = (now/2)+i ; j < i+now;j++){
                sum2 += s[j]-'0';
            }

            //cout << now << " " << sum1 << " " << sum2 << "\n";

            if(sum1==sum2){
                cout << now << "\n";
                return 0;
            }
        }

        now-=2;
    }








    return 0;

}