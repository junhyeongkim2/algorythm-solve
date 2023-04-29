#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;



    int smallest=100001;
    int biggest=0;

    while(n--){
        int s,e;
        cin >> s >> e;

        biggest = max(s,biggest);
        smallest = min(e,smallest);

    }

    if(biggest-smallest < 0){
        cout << 0;
    }else{
        cout << biggest-smallest;
    }





}