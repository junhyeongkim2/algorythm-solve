#include <iostream>

using namespace std;

int main(){

    while(true){
        int n , m;

        cin >> n >> m;

        if(n ==0 && m == 0 ){
            break;
        }

        if(n/m!=0 && n%m==0){
            cout << "multiple" << "\n";
        }
        else if(m/n!=0 && m%n==0){
            cout << "factor" << "\n";
        }
        else{
            cout << "neither" << "\n";
        }



    }



}