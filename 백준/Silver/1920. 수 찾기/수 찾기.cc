#include <bits/stdc++.h>
using namespace std;

int n ;
int m ;
map<int, int> ms;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        ms[a] = 1;
    }


    cin >> m;

    for(int i = 0 ; i < m ; i ++){
        int a;
        cin >> a;

        if( ms[a] !=0){
            cout << 1 << "\n";
        }else{
            cout <<  0 << "\n";
        }

    }






}