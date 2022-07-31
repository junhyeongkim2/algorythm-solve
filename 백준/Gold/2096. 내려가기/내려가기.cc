#include <iostream>

using namespace std;


int dp[3];
int dp2[3];

int N;

int main(){
    cin >> N;

    int answer=0;
    int answer2=0;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    for( int i = 1;  i<= N ; i ++){
        int a , b, c ;
        cin >> a >> b >> c;
        if(i == 1){
            dp[0] = a;
            dp[1] = b;
            dp[2] = c;
            dp2[0] = a;
            dp2[1] = b;
            dp2[2] = c;
        }else{
            int temp1,temp2,temp3;
            temp1 = max(dp[0],dp[1]) + a;
            temp2 = max(dp[0],max(dp[1],dp[2])) + b;
            temp3 = max(dp[1],dp[2]) + c;

            dp[0] = temp1;
            dp[1] = temp2;
            dp[2] = temp3;

            int temp4,temp5,temp6;
            temp4 = min(dp2[0],dp2[1]) + a;
            temp5 = min(dp2[0],min(dp2[1],dp2[2])) + b;
            temp6 = min(dp2[1],dp2[2]) + c;
            dp2[0] = temp4;
            dp2[1] = temp5;
            dp2[2] = temp6;


        }
        answer = max(max(dp[0] , dp[1]) , dp[2]);
        answer2 = min(min(dp2[0] , dp2[1]) , dp2[2]);
    }

    cout << answer;
    cout << " ";
    cout << answer2;







}