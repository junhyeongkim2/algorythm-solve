#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=0;
    int m=0;
    int temp=0;

    cin >> n >> m;

    int cnt=1;


    for(int i = 0 ; i < n; i++){
        int weight=0;
        cin >> weight;

        if(temp+weight > m){
            cnt++;
            temp=weight;
        }else if(temp+weight <= m){
            temp+=weight;
        }
    }

    if(n==0){
        cout << 0;
    }else{
        cout << cnt << "\n";

    }






}