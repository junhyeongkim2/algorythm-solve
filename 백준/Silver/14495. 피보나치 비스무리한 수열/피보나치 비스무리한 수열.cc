#include <iostream>

using namespace std;

long long dp [117];

long long fibo ( int n ){

    if(n<=3){
        return 1;
    }else{
        if(dp[n]!=0 ){
            return dp[n];
        }else{
            return dp[n] = fibo(n-1) + fibo(n-3);
        }

    }

}


int main(){

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    int nn;


    cin >>nn;

    cout << fibo(nn);




}