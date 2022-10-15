#include <bits/stdc++.h>

using namespace std;

int s1 , s2 , s3;

int arr[1001];

map<int,int> m1;


int main(){

    cin >> s1 >> s2 >> s3;


    for (int i = 1; i <=s1 ; ++i) {
        for (int j = 1; j <=s2 ; ++j) {
            for (int k = 1; k <=s3 ; ++k) {
                int a ;
                a = i+j+k;
                //cout << a <<"\n";

                arr[a]++;


            }
        }
    }

    //cout << "-------" <<"\n";

    int mans=0;
    int mans2=0;

    for (int i = 1; i <=s1+s2+s3 ; ++i) {


        if(mans < arr[i]){
            mans = arr[i];
            mans2 = i;
        }

    }

    cout << mans2;























}