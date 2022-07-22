#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N,K;
int W[101] = {0,};
int V[101] = {0,};
int DP[101][100001];

void dp(){
    for(int limit =1; limit<=K;limit++){
        for(int row=1;row<=N;row++){
            if(W[row]>limit){
                DP[row][limit] = DP[row-1][limit];
            }else{
                DP[row][limit] = max(DP[row-1][limit],DP[row-1][limit-W[row]]+V[row]);
            }
        }
    }
}


int main(){
    cin >> N >> K;
    
    for (int i=1;i<=N;i++){
        cin >> W[i] >> V[i];
    }
    
    for(int r=0;r<=N;r++){
        DP[r][0] = 0;
    }
    for (int c=0;c<=K;c++){
        DP[0][c] = 0;
    }
    
    dp();
    cout << DP[N][K];
    
    return 0 ;
    
}







