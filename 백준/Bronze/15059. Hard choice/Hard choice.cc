#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);


    int a,b,c;

    int d,e,f;

    cin >> a >> b >> c;

    cin >> d >> e >> f;


    int ans = 0;


    if(d-a>0){
        ans+=d-a;
    }

    if(e-b>0){
        ans+=e-b;
    }

    if(f-c>0){
        ans+=f-c;
    }
    cout << ans << "\n";














}

