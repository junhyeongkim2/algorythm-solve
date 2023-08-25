#include <bits/stdc++.h>
using namespace std;

int stats[21][21];
bool check[22];
int n;
int ans = 1000000000;

void dfs(int x, int pos){

    if( x == n / 2){

        int start,link;
        start = 0;
        link = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j<= n; j++){
                if(check[i]==true && check[j] == true) start += stats[i][j];
                if(check[i]==false && check[j] == false) link += stats[i][j];
            }
        }
        int temp = abs(start-link);
        if (ans > temp) ans = temp;

        return;

    }

    for(int i = pos; i < n ; i++){
        check[i]=true;
        dfs(x+1,i+1);
        check[i]=false;
    }
}




int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> stats[i][j];
        }
    }


    dfs(0,1);

    cout << ans << "\n";


    return 0;
}