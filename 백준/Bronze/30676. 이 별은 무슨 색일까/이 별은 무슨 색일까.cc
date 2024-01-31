#include <bits/stdc++.h>

using namespace std;


int n;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    if(n >= 620 && n <= 780){
        cout << "Red";
        return 0;
    }

    if(n >= 590 && n < 620){
        cout << "Orange";
        return 0;
    }

    if(n >= 570 && n < 590){
        cout << "Yellow";
        return 0;
    }

    if(n >= 495 && n < 570){
        cout << "Green";
        return 0;
    }

    if(n >= 450 && n < 495){
        cout << "Blue";
        return 0;
    }

    if(n >= 425 && n < 450){
        cout << "Indigo";
        return 0;
    }

    if(n >= 380 && n < 425){
        cout << "Violet";
        return 0;
    }



}