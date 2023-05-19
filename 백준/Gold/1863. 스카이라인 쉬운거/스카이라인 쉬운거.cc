#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n ;
    cin >> n;

    vector<int>v;
    stack<int>st;

    for(int i = 0 ; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back(b);
    }

    int cnt =0;
    for(int i = 0; i < v.size(); i++){
        while(!st.empty()&&st.top()>v[i]){
            if(st.top()!=0){
                cnt++;
            }
            st.pop();
        }
        if(!st.empty()&&st.top() == v[i] )continue;
        st.push(v[i]);
        //cout << v[i] << " " << cnt << "\n";
    }

    while(!st.empty()){
        if(st.top()!=0){
            cnt++;
        }
        st.pop();
    }

    cout << cnt << "\n";








    return 0;

}