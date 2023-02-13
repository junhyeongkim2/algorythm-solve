#import <bits/stdc++.h>
using namespace std;

int n;
string graph[64];

void printCompResult(int size, int y, int x){


    char curr = graph[y][x];

    for(int i = y; i < y+size; i++ ){
        for(int j = x; j < x+size; j++ ){

            if(graph[i][j]!=curr){
                cout << "(";
                printCompResult(size/2,y,x);
                printCompResult(size/2,y,x+size/2);
                printCompResult(size/2,y+size/2,x);
                printCompResult(size/2,y+size/2,x+size/2);
                cout << ")";
                return;
            }
        }
    }
    cout << curr;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> graph[i];
    }

    printCompResult(n,0,0);

    return 0;

}