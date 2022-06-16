#include <iostream>
#include <algorithm>

using namespace std;


int arr[1000];
int N;

int main(){
    cin >> N;
    for(int i = 0 ; i< N;i++){
        int a =0;
        cin >> a;
        arr[i] = a;
    }

    int res=0;

    sort(arr,arr+N);

    for(int i = 0 ; i < N ;i ++){
        if(arr[i]>res+1){
            break;
        }
        res+=arr[i];
        //cout <<res << "\n";
    }

    cout << res+1;







}