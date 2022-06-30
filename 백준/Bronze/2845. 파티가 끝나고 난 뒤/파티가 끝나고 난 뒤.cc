#include <iostream>


using namespace std;

int main(){

    int n,m;

    int a1,a2,a3,a4,a5;

    cin >> n>> m;

    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    int arr[5];
    arr[0] = a1;
    arr[1] = a2;
    arr[2] = a3;
    arr[3] = a4;
    arr[4] = a5;

    int nm = n*m;

    for(int i = 0 ; i< 5;i++){
        cout << arr[i] - nm << " ";


    }












}