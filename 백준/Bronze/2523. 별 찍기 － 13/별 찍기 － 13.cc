#include <iostream>

using namespace std;


int N;

int main(){

    cin >> N;

    for (int i = 1; i<=N;i++){
        for(int i1=1;i1<=i;i1++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i= N-1; i>0;i--){
        for(int i1=1;i1<=i;i1++){
            cout <<"*";
        }
        cout << "\n";

    }







}