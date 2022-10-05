#include <bits/stdc++.h>
using namespace std;

int N;

int arr[51];



int main(){

    cin >> N;

    for (int i = 1; i <=N ; ++i) {
        cin >> arr[i];
    }


    int ans =0;


    while(true){

        bool allZero=true;
        bool check=false;


        for (int i = 1; i <=N ; ++i) {

            if(arr[i]){
                allZero=false;
            }

            if(arr[i]%2){
                arr[i] -= 1;
                check=true;
                ans++;
            }
        }

        if(!check){
            for (int i = 1; i <=N ; ++i) {
                arr[i] = arr[i]/2;
            }
            ans++;
        }

        if(allZero){

            break;
        }

    }
    cout << ans-1;



}