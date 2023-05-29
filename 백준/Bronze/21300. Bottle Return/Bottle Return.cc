#include <bits/stdc++.h>
using namespace std;



int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);



    int answer =0;

    for(int i = 0 ; i < 6; i++){
        int a;
        cin >> a;
        answer += (a *5);
    }
    cout << answer << "\n";









    return 0;
}