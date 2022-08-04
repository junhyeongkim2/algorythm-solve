#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

string s;


int main(){
    cin >> s;

    for(int i = 0; i<s.size();i++){

        if(s[i]-'0'>= 17 && s[i]-'0' <=42){
            s[i] = tolower(s[i]);
        }else{
            s[i] = toupper(s[i]);
        }
    }

    cout << s;









}