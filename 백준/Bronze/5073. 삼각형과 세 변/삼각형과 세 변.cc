#include<bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int a,b,c;
    while(true){
        cin >> a>> b>> c;

        if(a==0&&b==0&&c==0){
            break;
        }


        if(a+b <= c || b+c <= a || a+c <= b){
            cout << "Invalid" <<"\n";
        }else{

            if(a==b && a==c && b==c){
                cout << "Equilateral" <<"\n";
            }else if(a==b && b!=c || a==c && c!=b || b==c && b!=a){
                cout << "Isosceles" <<"\n";
            }else if(a!=b && a!=c && c!=b){
                cout << "Scalene" <<"\n";
            }

        }




    }









    return 0;
}