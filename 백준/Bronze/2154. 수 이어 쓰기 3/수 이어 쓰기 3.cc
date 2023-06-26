#include<bits/stdc++.h>
using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n ;
    string s;

    for(int i=1; i<=n; i++){
        s+= to_string(i);



    }
    auto it = s.find(to_string(n));
    cout << it+1 <<"\n";







}