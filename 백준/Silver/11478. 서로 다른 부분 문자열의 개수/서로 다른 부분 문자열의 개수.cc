#include <algorithm>
#include <set>
#include <iostream>
using namespace std;


int main(){

    string s ;
    cin >> s;
    string tmp;
    set<string> s1 ;

    for(int i =0 ; i < s.size(); i++){
        tmp ="";
        for(int j=i; j<s.size();j++){
            tmp  += s[j];
            s1.insert(tmp);
        }
    }
    cout << s1.size();





}