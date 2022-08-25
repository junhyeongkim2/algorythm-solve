#include <iostream>

using namespace std;


int n ;


int f1 = 0;
int f2 = 0;
int t1 = 0;
int t2 = 0;


int main(){
    cin >> n;

    f1 = n/5;

    if(n<5&&n%2!=0){
        cout << -1;

    }else{
        while(true){
            if(f1==-1){
                break;
            }
            f2 = n-(5*f1);

            if(f2!=0){
                t1 = f2/2;
                t2 = f2%2;

                if(t2==0){
                    cout << t1+f1 << "\n";
                    break;
                }else{
                    //cout << -1 << "\n";
                    f1= f1 -1;
                }

            }else{
                cout << f1;
                break;
            }
        }


    }






}