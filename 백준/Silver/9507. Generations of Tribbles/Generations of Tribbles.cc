#include <iostream>
#include <time.h>

long long dp [70];

using namespace std;

long long  koong(long long n){
    if (n<2){
        return 1;
    }else if(n == 2){
        return 2;
    }else if (n==3){
        return 4;
    }else if (n>3){
        if(dp[n]!=0){
            return dp[n];
        }else{
            return dp[n] = koong(n-1)+ koong(n-2)+ koong(n-3)+ koong(n-4);
        }

    }




}

int n;
int main(){
    /*
    clock_t start, end;
    double result;
    start = clock();
*/
    int T;

    cin >> T;
    while(T--){
        cin >> n;
        cout << koong(n) << "\n";
    }

/*
    end = clock();
    result = (double)(end-start);
    cout << result << "ms";
*/
}