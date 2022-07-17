#include <iostream>

using namespace std;

int N ;
int house[1001][3];
int cost[3];
int R,G,B;


int main(){

    cin >> N ;
    house[0][0] = 0;
    house[0][1] = 0;
    house[0][2] = 0;

    for(int i = 1 ; i <=  N ; i++){
        cin >> R >> G >> B;
        cost[0] = R;
        cost[1] = G;
        cost[2] = B;

        house[i][0] = min(house[i-1][1],house[i-1][2]) + cost[0];
        house[i][1] = min(house[i-1][0],house[i-1][2]) + cost[1];
        house[i][2] = min(house[i-1][0],house[i-1][1]) + cost[2];
    }

    cout << min(house[N][0] , min(house[N][1],house[N][2]));







}