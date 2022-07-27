#include <iostream>


using namespace std;

int dp[46];




int fibo(int n ){

    if (n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }

    if(dp[n]!=0){
        return dp[n];
    }


    return dp[n]=fibo(n-2) + fibo(n-1);
}

int main(){
    int n;
    cin >> n;

    cout << fibo(n);



}