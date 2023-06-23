#include<bits/stdc++.h>
using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int t;
    cin >> t;


    while(t--){
        vector<int>v;
        vector<int>v2;

        for(int i = 0; i < 7; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }

        int sum=0;

        for(int i = 0 ; i < v.size(); i++){
            if(v[i]%2==0){
                sum+=v[i];
                v2.push_back(v[i]);
            }
        }

        sort(v2.begin(),v2.end());

        cout << sum << " " << v2[0] << "\n";





    }



}