#import <bits/stdc++.h>
using namespace std;
int arr[100001];
int N , M;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    for(int i = 1 ; i <= N; i++){
        cin >> arr[i];
    }


    int start = 1;
    int end = 1;
    int sum = arr[1];
    int ans = 987654321;

    while(start<=end && end<=N){
        if(sum>=M) ans = min(ans,(end-start+1));
         if(sum <  M){
             end++;
             sum += arr[end];
        }else{
             sum -= arr[start];
             start++;
         }

    }

    if(ans==987654321){
        cout << "0"<<"\n";
    }else{
        cout << ans << "\n";
    }










}