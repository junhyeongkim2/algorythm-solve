#include <iostream>
#include <map>



using namespace std;

map<int,bool>m1;


int main(){


    for( int i = 1; i<=100;i++){
        m1[i*i] = true;
    }

    int M , N;

    cin >> M >> N;


    int sum=0;
    int min=10000;


    int c1=0;
    for(int i = M;i<=N;i++){

        if(m1[i]){
            sum = i + sum;
            if(min>i){
                min = i;
            }
            c1++;
        }
    }

    if(c1>0){
        cout << sum << "\n";
        cout << min;
    }else{
        cout << -1;
    }











}
