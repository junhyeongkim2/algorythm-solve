#include <queue>
#include <iostream>
#include <map>
using namespace std;

string N;

int main()
{
    cin >> N;

    int flag =0;
    int count = 0;

    for(int i = 0; i < N.length();i++){
        if (N[i] != N[i+1]){
            if(flag==1){
                flag=0;
                count++;

            }else{
                flag =1;
            }
        }


        

    }


    cout <<count;








}






