#include <bits/stdc++.h>

using namespace std;


int arr[7];
int ans = 0;

int marr =100 ;

int main() {


    for (int i = 0; i <7 ; ++i) {
        cin >> arr[i];
        if(arr[i]%2==1){
            //cout << arr[i] <<" 홀수입니다" <<"\n";
            ans += arr[i];
            marr = min(marr, arr[i]);
        }


    }

    if(ans == 0){
        cout << "-1";
    }else{
        cout << ans << "\n";
        cout << marr << "\n";
    }

    

    
 
}