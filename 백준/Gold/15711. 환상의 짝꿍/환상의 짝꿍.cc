#include <bits/stdc++.h>
using namespace std;

const int MAX_LENGTH = 2000000;
vector<int>prime;
bool eratos[MAX_LENGTH+1];

void eratosthenes(){
    eratos[0] = eratos[1] = true;

    for(int i = 2; i<=MAX_LENGTH; i++){
        if(eratos[i]==true)
            continue;
        prime.push_back(i);
        for(int j = i * 2; j<=MAX_LENGTH; j+=i){
            eratos[j]=true;
        }
    }
}

bool isPrime(long long A){
    if(A <= MAX_LENGTH) return !eratos[A];
    else{
        for(int i = 0 ; i < prime.size(); i++){
            if(A%prime[i]==0){
                return false;
            }
        }
        return true;
    }
}






int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    eratosthenes();

    int T;
    cin >> T;

    while(T--){
        long long A,B,S;
        cin >> A >> B;
        S = A + B;
        if(S==2) cout << "NO" << "\n";
        else if (S%2 == 0) cout << "YES" << "\n";
        else {

            if ( isPrime(S-2) ){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }

        }




    }








    return 0;
}