#include <queue>
#include <string>
#include <iostream>
using namespace std;

string S;
string T;

queue<char>q;


void recursive(string sx){
    string nsx;

    if(sx.length() == S.length()){

        if(sx == S){
            cout << 1;
        }else{
            cout << 0;
        }


        return;
    }
    if(sx[sx.length()-1] =='A' ){
        nsx = sx.substr(0,sx.length()-1);

    }else if(sx[sx.length()-1]=='B'){

        for (int i = sx.length()-2; i>=0; --i) {
            nsx+= sx[i];
        }
    }
    //cout << nsx<<"\n";

    recursive(nsx);


}



int main(){

    cin >> S;
    cin >> T;


    recursive(T);



}



