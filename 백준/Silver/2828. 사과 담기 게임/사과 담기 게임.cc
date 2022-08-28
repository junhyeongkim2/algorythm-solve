#include <bits/stdc++.h>

using namespace std;

int N , M ;
int j;


int main(){

    cin >> N >> M ;
    cin >> j;

    int front = 0 ;
    int back ;

    back = M;
    int ans = 0;

    for (int i = 0; i < j; ++i) {
        int a;
        cin >> a;
        while(1){
            if(front < a && a<=back){
                break;
            }
            if(a <= front){
                front --;
                back --;
                ans++;
            }
            if(a > back ){
                front ++ ;
                back ++ ;
                ans++;
            }
        }
    }
    cout << ans <<"\n";














}