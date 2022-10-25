#include <bits/stdc++.h>

using namespace std;

int graph[9][9];




int max1 =0;
int ans1=0;
int ans2=0;
int main() {

    for (int i = 0; i <9 ; ++i) {
        for (int j = 0; j <9 ; ++j) {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i <9 ; ++i) {
        for (int j = 0; j <9 ; ++j) {
            //cout << graph[i][j];
            if(max1<graph[i][j]){
                max1 = graph[i][j];
                ans1 = i;
                ans2 = j;

            }


        }
        //cout <<"\n";

    }

    cout << max1 <<"\n";
    cout << ans1+1  << " " << ans2+1;






 
}