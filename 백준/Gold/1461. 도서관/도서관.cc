#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int N , M ;
int arr[10000];
int main(){
    cin >> N >> M;
    int cnt=0;

    for (int i = 0; i <N ; ++i) {
        cin >> arr[i];
        if(arr[i]<0){
            cnt++;
        }

    }
    sort(arr,arr+N);

    int result=0;
    for (int i = N-1; i >=cnt ; i-=M) {
        result += (abs(arr[i])*2);
    }
    for (int i = 0; i <cnt ; i+=M) {
        result += (abs(arr[i]*2));
    }

    result -= max(abs(arr[0]),abs(arr[N-1]));
    cout << result << "\n";


}