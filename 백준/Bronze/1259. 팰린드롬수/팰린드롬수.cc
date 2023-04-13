#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    while(N!="0"){

        cin >> N;
        string buf = N;

        reverse(N.begin(),N.end());

        if(N=="0"){
            break;
        }
        else if (N == buf){
            cout << "yes"<<"\n";
        }else{
            cout << "no" << "\n";
        }



    }


}

