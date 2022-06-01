#include <iostream>


using namespace std;


int gcd(int a, int b){
    int c =0 ;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a ;


}

int main(){
    int n =0;
    cin >> n;


    for(int i = 0; i < n ; i ++ ){
        int p , q ;
        cin >> p >> q;
        int g  = gcd(p,q);
        cout << (p*q)/g << "\n";
    }



}