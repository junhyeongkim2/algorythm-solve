#include <bits/stdc++.h>
using namespace std;

int n,m;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    int check[51]={0,};
    int check2[51]={0,};

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <m ; ++j) {
            char x;
            cin >> x;
            if(x=='X'){
                check[i]=1;
                check2[j]=1;
            }
        }
    }


    int xcount =0;
    int ycount =0;

    for (int i = 0; i <n ; ++i) {
        if(check[i]==0){
            xcount++;
        }

    }
    for (int i = 0; i <m ; ++i) {
        if(check2[i]==0){
            ycount++;
        }
    }

    cout << max(xcount,ycount);


}