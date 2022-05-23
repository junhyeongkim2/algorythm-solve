#include <algorithm>
#include <math.h>
#include <iostream>

using namespace std;

int main(){

    int N1,N2,N3 ;

    cin >> N1>> N2 >> N3;

    int a[N1];


    int z = sqrt(pow(N2,2) + pow(N3,2));
    //cout << z << "\n";

    for(int i =0;i<N1;i++){
        int n ;
        cin >> n;
        a[i] = n;
    }
    for(int i=0;i<N1;i++){
        if(a[i] <= z){
            cout << "DA" << '\n';
        }else{
            cout <<"NE" << '\n';
        }


    }















}

