#include<bits/stdc++.h>
using namespace std;


int n=0;

vector<int>drink;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0 ; i < n ; i ++){
        int a=0;
        cin >> a;
        drink.push_back(a);
    }

    sort(drink.begin(),drink.end(),greater<>());
    int ans = 0 ;

    for(int i = 0 ; i <n; i+=3 ){
        for(int j = i ; j < n && j < i+2; j++){
            ans += drink[j];
        }
    }
    cout << ans <<"\n";











}

