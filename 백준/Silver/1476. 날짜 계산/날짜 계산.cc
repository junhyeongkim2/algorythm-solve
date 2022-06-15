#include <iostream>

using namespace std;

int E,S,M;

int a1,a2,a3;


int main(){
    cin >> E >> S >> M;


    a1=0 ;
    a2=0 ;
    a3=0 ;

    int count=0;
    while(true){

        a1++;
        a2++;
        a3++;
        count++;

        //cout << count<<"\n";

        if(a1>15){
            a1=1;
        }
        if(a2>28){
            a2=1;
        }
        if(a3>19){
            a3=1;
        }


        if(a1==E&&a2==S&&a3==M){
            cout << count;
            break;
        }





    }






}