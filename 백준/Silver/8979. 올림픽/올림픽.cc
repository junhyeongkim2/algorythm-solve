#include <iostream>
#include <vector>

using namespace std;


int main() {

    int n=0,k=0;

    int gold[1001];
    int silver[1001];
    int bronze[1001];

    cin >> n >> k ;

    for(int i = 1 ;  i<= n; i++){
        int a,b,c,d;
        cin >> a>> b>> c>> d;
        gold[a]=b;
        silver[a]=b;
        bronze[a]=b;
    }

    int res=1;

    for(int i=1; i<=n;i++){

        if(gold[i]>gold[k]){
            res++;
        }else if(gold[i]==gold[k]){
            if(silver[i]>silver[k]){
                res++;
            }else if(silver[i]==silver[k]){
                if(bronze[i]>bronze[k]){
                    res++;
                }
            }
        }
    }

    cout << res <<"\n";







    return 0;
}