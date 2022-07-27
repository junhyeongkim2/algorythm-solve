#include <iostream>
using namespace std;


int main(){

    int n;
    int a;

    cin >> n;
    cin >> a;

    int count=0;

    for( int i = 1; i<=n;i++){
        if(n%i==0){
            count++;
        }

        if(count==a){
            cout << i;
            break;
        }
    }

    if(count == 0 || count < a){
        cout << 0;
    }



}