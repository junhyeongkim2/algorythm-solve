#include <iostream>
using namespace std;


int main(){
    long long s ;
    cin >> s;
    int count =0 ;

    long long answer= 0;
    while(true){
        count ++ ;

        answer+= count;

        if(answer == s){
            cout <<count;
            break;
        }
        if(answer>s){
            cout << count-1;
            break;
        }




    }

}