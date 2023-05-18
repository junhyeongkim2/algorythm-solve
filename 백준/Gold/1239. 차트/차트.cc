#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int>v;
    int n=0;
    int max=0;
    int cnt=0;
    cin >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    do{
        cnt =0;
        vector<int>t;
        for(int i = 0 ; i < n; i++){
            t.push_back(v[i]);
        }
        for(int i = 0 ; i < n; i++){
            t.push_back(v[i]);
        }

        for(int i =0; i<n; i++){
            int temp = 0;
            for(int j = i ; j < t.size(); j++){
                temp += t[j];
                if(temp==50){
                    cnt++;
                    break;
                }else if(temp > 50){
                    break;
                }
            }
        }
        if(max<cnt){
            max=cnt;
        }

    }while(next_permutation(v.begin(),v.end()));

    cout << max/2 << "\n";

    return 0;

}