#include<bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int a=0,b=0,c=0;
    while(cin >> a >> b>> c){

        int ma =  max(abs(a-b), abs(c-b));
        cout << ma -1 <<"\n";


    }









}

