#include <iostream>
using namespace std;

int main(){

    int i;
    cin >> i;
    int N , M;


    for(int j = 0 ; j<i;j++ ){
        cin >> N >> M;
        if( N<12 || M<4){
            cout << -1 << "\n";
        }else{
            cout << ( (12*M) - (M-4)) << "\n";
        }
    }














}