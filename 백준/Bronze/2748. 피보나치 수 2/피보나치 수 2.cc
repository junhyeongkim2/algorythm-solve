#include <iostream>
using namespace std;


long long memo[90]={0,};



long long fibo(int n){
    if(n==0)return 0;
    else if (n==1) return 1;
    if(memo[n]>0) return memo[n];
    else{
        memo[n] = fibo(n-1)+fibo(n-2);
        return memo[n];
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cout << fibo(t) <<"\n";
    
    
}