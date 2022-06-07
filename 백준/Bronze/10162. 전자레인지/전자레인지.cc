#include <iostream>
using namespace std;


int main(){
    int a;
    cin >> a;
    int c1 =0 ;
    int c2 =0;
    int c3 =0;
    while(true){
        if(a>=300){
            c1 += a/300;
            a = a%300;
        }else if( a>=60){
            c2 += a/60;
            a = a%60;
        }else if( a>=10){
            c3 += a/10;
            a = a%10;
        }else if(a==0){
            cout << c1 << " " << c2 <<" " << c3;
            break;
        }else{
            cout << -1;
            break;
        }






    }






}