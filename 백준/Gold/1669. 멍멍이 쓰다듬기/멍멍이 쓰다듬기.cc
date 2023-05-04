#include <bits/stdc++.h>
using namespace std;

int main(){


    int x,y;

    cin >> x >> y;

    long diff = y-x;
    long n = 0;

    if(diff==0){
        cout << 0;
        return 0;
    }

    while(n*n<diff)n++;

    n = (n*n==diff) ? n : n-1;


    long answer = 2 * n - 1;
    diff -= n * n;

    while(diff>0){
        diff -= min(n,diff);
        answer++;
    }

    cout << answer << "\n";


}