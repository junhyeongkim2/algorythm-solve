#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int arr[51];
bool able_arr[51];
int N , M , K;


int main(){
    
    double sum = 0 , numerator=0,denominator=1;
    cin >> M;
    for(int i =1;i<=M;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> K;
    
    for(int i = 1; i <=M;i++){
        if(arr[i] >= K) able_arr[i] = true;
    }

    for(int i =1;i<=M;i++){
        if(able_arr[i]){
            double temp = 1;
            for(int j = 0 ; j < K;j++){
                temp *= (arr[i]-(double)j);
            }
            numerator += temp;
        }
    }

    for(int i = 0 ; i < K;i++){
        denominator *= (double)(sum-i);
    }
    cout << fixed;
    cout.precision(16);
    cout << (double)(numerator)/(double)(denominator);
    
    
    
    
    
    
}


