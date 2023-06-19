#include<bits/stdc++.h>
using namespace std;


int H,W,N,M;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> H >> W >> N >> M;


    int h = 0;
    int w = 0;

    int hle = 0;
    int wle = 0;


    while(hle<H){
        h++;
        hle++;
        if(hle<H){
            hle+=N;
        }
        //cout << hle << "\n";

    }
    //cout << h<<"\n";


    while(wle<W){
        w++;
        wle++;
        if(wle<W){
            wle+=M;
        }
        //cout << wle << "\n";

    }

    cout << w * h <<"\n";






}