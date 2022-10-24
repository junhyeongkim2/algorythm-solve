#include <bits/stdc++.h>

using namespace std;

int A , B , C ,D;


int main() {

    cin >> A >> B >> C >> D;


    int minute = D / 60;
    int second = D % 60;
    int hour = minute/60;

    minute -= hour * 60;

    //cout << hour << " " << minute << " " << second <<"\n";

    A+=hour;
    B+=minute;
    C+=second;

    if(C>59){
        C%=60;
        B++;
    }

    if(B>59){
        B%=60;
        A++;
    }

    if(A>23){
        A%=24;
    }

    cout << A << " " << B << " "<< C;




















 
}