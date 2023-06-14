#include<bits/stdc++.h>

using namespace std;

int n;
stack<pair<int,int>>st;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        //cout << "i : " << i << " "<<  st.size() <<  "\n";


        while ( !st.empty()){
            if(a > st.top().second)st.pop();
            else break;
        }


        if(st.empty()){
            cout << 0 << " ";
        }else{
            cout << st.top().first << " ";
        }
        //cout << "\n";

        st.push({i+1,a});

    }



}