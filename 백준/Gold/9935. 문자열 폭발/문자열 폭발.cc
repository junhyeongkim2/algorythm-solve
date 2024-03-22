#include <bits/stdc++.h>

using namespace std;


int main() {


    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    string bomb;
    cin >> s >> bomb;


    stack<char> st;

    for (int i = 0; i < s.size(); i++) {
        st.push(s[i]);

        if ( s[i] == bomb[bomb.length()-1] && st.size() >= bomb.length()){
            string tempS;
            for(int j = 0 ; j < bomb.size(); j++){
                int temp = st.top();
                st.pop();
                tempS += temp;
            }
            std::reverse(tempS.begin(), tempS.end());
            if(tempS != bomb){
                for(int k = 0 ; k < bomb.size(); k++){
                    st.push(tempS[k]);
                }
            }
        }
    }

    if(st.size()==0){
        cout << "FRULA";
    }else{
        string tempS;
        int count = st.size();

        for(int j = 0 ; j < count; j++){
            int temp = st.top();
            st.pop();
            tempS += temp;
        }
        std::reverse(tempS.begin(), tempS.end());
        cout << tempS << "\n";
    }






}