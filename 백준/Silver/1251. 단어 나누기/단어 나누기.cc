#include <bits/stdc++.h>

using namespace std;



string s;

int main() {
    cin >> s;


    string result = "{";


    for (int i = 0; i <s.length()-2 ; ++i) {
        for (int j = i+1; j <s.length()-1 ; ++j) {

            string val;

            for (int k = i; k >=0 ; --k) {
                val += s[k];
            }
            for (int k = j; k > i ; --k) {
                val += s[k];
            }
            for (int k = s.length()-1; k >j ; --k) {
                val += s[k];
            }

            if(result>val)result=val;
        }
    }

    cout << result <<"\n";


}













