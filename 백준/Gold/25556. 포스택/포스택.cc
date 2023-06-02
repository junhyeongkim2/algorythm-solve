#include <bits/stdc++.h>
using namespace std;


int N,K;
vector<string>ans;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n, min, min_idx;
    cin >> n;
    vector<int>seq(n);
    
    for(int i = 0 ; i < n;i++){
        cin >> seq[i];
    }
    vector<int>stack(4);
    vector<int>diff(4);
    for(int i = 0 ; i < n; i++){
        int tmp = seq[i];
        bool check = false;
        min = 100001;
        min_idx = 100001;
        for(int j = 0; j < 4; j++){
            diff[j] = tmp-stack[j];
            if(min > diff[j] && diff[j] > 0){
                min = diff[j];
                min_idx = j;
                check = true;
            }
        }
        if(check) stack[min_idx]=tmp;
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    




    return 0;
}