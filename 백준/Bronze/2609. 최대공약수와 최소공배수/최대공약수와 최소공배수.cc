#include <iostream>

using namespace std;

int gcd(int a , int b){
    int c=0;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;  
}


int main(){
    int p , q;
    cin >> p >> q;
    int g = gcd(p,q);
    cout << g << "\n";
    cout << (p*q)/g << "\n";
    
    
    
    
    
    
}