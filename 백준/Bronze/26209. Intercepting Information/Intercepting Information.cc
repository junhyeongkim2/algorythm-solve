#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);



    int a;
    bool check = false;
    while(cin >> a){

        if(a!=0 && a!=1){
            check = true;
            break;
        }

    }


    if(check){
        cout << "F"<<"\n";
    }else{
        cout << "S" <<"\n";
    }








}

