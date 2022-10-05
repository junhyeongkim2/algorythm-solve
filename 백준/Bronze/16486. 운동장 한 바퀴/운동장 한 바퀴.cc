#include <iostream>
using namespace std;

int main(){
    int d1, d2;
    float pi = 3.141592;
    cin>>d1>>d2;
    cout << fixed;
    cout.precision(6);
    cout<<d1*2 + 2*pi*d2;
    return 0;
}