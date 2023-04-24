#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int>a, pair<int,int> b){

    if ( a. second < b.second){
        return true;
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n;
    cin >> n;


    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        sum += abs(a);
    }

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        sum += abs(a);
    }


    cout << sum <<"\n";

}

