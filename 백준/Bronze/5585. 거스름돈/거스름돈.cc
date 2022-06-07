#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int money = 0;
    money = 1000 - n;
    int count = 0;
   // cout << money << "\n";

    while(true){
        if(money >= 500){
            count += money / 500;
            money %= 500;
            //cout << "checked1" << "\n";
           // cout << money;
        }else if( money >= 100){
            count += money / 100;
            money %= 100;
           // cout << "checked2";
        }else if (money >=50){
            count += money / 50;
            money %= 50;
        }else if (money >=10){
            count += money / 10;
            money %= 10;
        }else if (money >=5){
            count += money / 5;
            money %= 5;
        }else if (money >=1){
            count += money / 1;
            money %= 1;
        }else{
            cout << count;
            break;
        }
    }


















}
