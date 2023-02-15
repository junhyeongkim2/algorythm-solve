#include<bits/stdc++.h>
using namespace std;


string s;
int n;
vector<string>v;

int main() {

    cin >> s;
    cin >> n;

    for(int i = 0; i < n ; i++){
        string a;
        cin >> a;
        v.push_back(a);
    }

    for(int j = 0 ; j < 26; j ++){
        string temp;
        for(int i = 0 ; i < s.size(); i++){
            if ( s[i] + j >  122  ){
                int a = (s[i] + j) - 122;
                temp += char(96 + a);
            }else{
                temp += (s[i] + j);
            }
        }

        for(int i = 0; i < v.size(); i++){
            if ( temp.find(v[i]) != string::npos ){
                cout << temp <<"\n";
                break;
            }
        }
    }


}
