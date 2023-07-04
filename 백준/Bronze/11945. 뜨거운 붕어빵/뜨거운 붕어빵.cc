#include<bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin >> n >> m;

    int array[11][11];


    if(n==0||m==0){
        return 0;
    }




    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < m; j++){
            array[i][j]= s[j]-'0' ;
        }
    }


    for(int i = 0; i<n; i++){
        for(int j = m-1; j >= 0; j--){
            cout << array[i][j];
        }
        cout <<"\n";
    }













    return 0;
}