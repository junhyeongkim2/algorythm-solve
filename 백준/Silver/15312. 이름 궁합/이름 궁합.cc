#include <iostream>
#include <vector>
using namespace std;


string A;
string B;

int arr[27];

int dp[4001][4001];

int main(){
    arr[1] = 3;
    arr[2] = 2;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 3;
    arr[6] = 3;
    arr[7] = 2;
    arr[8] = 3;
    arr[9] = 3;
    arr[10] = 2;
    arr[11] = 2;
    arr[12] = 1;
    arr[13] = 2;
    arr[14] = 2;
    arr[15] = 1;
    arr[16] = 2;
    arr[17] = 2;
    arr[18] = 2;
    arr[19] = 1;
    arr[20] = 2;
    arr[21] = 1;
    arr[22] = 1;
    arr[23] = 1;
    arr[24] = 2;
    arr[25] = 2;
    arr[26] = 1;


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> A;
    cin >> B;

    int c1=0;
    int c2=0;
    for(int i=1;i<=A.length()*2-1;i+=2){
        dp[1][i] = arr[A[c1] - 'A'+1] ;
        c1++;
    }
    for(int i=2;i<=(A.length()*2);i+=2){
        dp[1][i] = arr[B[c2] - 'A'+1] ;
        c2++;
    }


    int le = (A.length()*2)-1;
    for(int i = 2 ; i<=(A.length()*2)-1;i++){
        for(int j=1;j<=le;j++){
            dp[i][j] = (dp[i-1][j] + dp[i-1][j+1])%10;
            if(i==A.length()*2-1){
                cout << dp[i][j];
            }

        }
        le --;

    }




}