#include <iostream>
using namespace std;

int N ;

int dp1[100001];
int dp2[100001];


int main(){

    cin >> N;


    int temp=0;
    for(int i=1;i<=N;i++){
        dp1[i]=1;
        dp2[i]=1;
        int a;
        cin >> a;
        if(temp<=a){
            dp1[i] = dp1[i-1]+1;
            //cout << "dp1 : " << dp1[i] << "\n";
        }
        if (temp>=a){
            dp2[i] = dp2[i-1]+1;
            //cout << "dp2 : " << dp2[i] << "\n";
        }
        temp=a;
    }

    int m1 =dp1[1] ;
    int m2 = dp2[1] ;
    for(int i=1;i<=N;i++){
        m1 = max(m1,dp1[i]);
        m2 = max(m2,dp2[i]);
    }

    cout << max (m1,m2) << "\n";













}