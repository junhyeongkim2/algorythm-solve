#include <iostream>


using namespace std;


bool isprime[1001]={};
int N;
int K;

int main(){

    cin >> N >> K ;

    int count=0;

    bool check = false;

    for(int i = 2;i<=N;i++){
        if (isprime[i]==false){
            for(int j=i;j<=N;j+=i){
                if(isprime[j]==false){
                    isprime[j]=true;
                    count++;
                    //cout << j <<" "<<  count << "\n";
                }
                if(N%2==0){
                    if(count==(K)){
                        cout << j ;
                        check=true;
                        break;
                    }
                }else{
                    if(count==K){
                        cout << j ;
                        check=true;
                        break;
                    }

                }
            }

        }
        if(check==true){
            break;
        }


    }
















}