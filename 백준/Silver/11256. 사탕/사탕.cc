#include <bits/stdc++.h>

using namespace std;

int T;
int j , n ;




int main(){

    cin >> T;


    while(T--){
        cin >> j >> n;
        vector<int> v;

        for(int i = 0 ; i < n;i++){
            int r,c;
            cin >> r >> c;
            v.push_back(r*c);
        }

        std::sort(v.begin(), v.end(),greater<int>());
        int cnt=0;
        while(j>0){
            j -= v[cnt];
            cnt++;
        }

        cout << cnt<<"\n";


    }









}