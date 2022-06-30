#include <iostream>

int N;

using namespace std;

int main(){
    cin >> N;

    int c1=0;
    int c2=0;

    c1 = N-1;
    c2=1;

    for(int i = 0 ; i< N-1;i++){
        for(int i1=0;i1<c1;i1++){
            cout << " ";
        }
        for(int i2=0;i2<c2;i2++){
            cout <<  "*";
        }
        c1--;
        c2+=2;
        cout << "\n";
    }

    for(int i=0;i<c2;i++){
        cout <<"*";
    }
    cout << "\n";

    c2-=2;
    c1=1;

    for(int i = 0 ; i< N-1;i++){
        for(int i1=0;i1<c1;i1++){
            cout << " ";
        }
        for(int i2=0;i2<c2;i2++){
            cout <<  "*";
        }
        c1++;
        c2-=2;
        cout << "\n";
    }









}