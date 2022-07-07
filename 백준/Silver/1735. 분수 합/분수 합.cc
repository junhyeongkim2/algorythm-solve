#include <iostream>

using namespace std;

int a, b, c, d;


int gcd(int a, int b) {

    if(b==0){
        return a;
    }


    return gcd(b,a%b);
}

int main() {

    cin >> a >> b >> c >> d;

    int z1 = b * d;
    int z2 = c * b;
    int z3 = a * d;

    int div = gcd(z1,(z2+z3));

    cout << (z2+z3)/div << " " << (z1)/div;






}


