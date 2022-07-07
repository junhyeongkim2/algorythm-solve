#include <iostream>
#include <vector>
#define MAX 1000001

using namespace std;

vector<int>v1;


bool prime[MAX];

int n;


bool solve(int n1){

    for(int i = n1-3; i>2; i-=2 ){
        if(prime[i]==false && prime[n1-i] == false){
            cout << (n1) << " = " << n1-i <<" + " << i  << "\n";
            return true;
        }
    }
    cout << "Goldbach's conjecture is wrong." << "\n";
    return false;
}


int main(){


    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    for(int i = 2 ; i < MAX;i++){
        if(prime[i]==false){
            //cout << i << "\n";
            for(int j = i+i;j<MAX;j+=i){
                if(prime[j]==false){
                    prime[j]=true;
                    //cout << j << "\n";
                }
            }
        }
    }
    prime[0]=true;
    prime[1]=true;

    while(true){

        cin >> n;
        if(n==0){
            break;
        }
        solve(n);



    }




}
