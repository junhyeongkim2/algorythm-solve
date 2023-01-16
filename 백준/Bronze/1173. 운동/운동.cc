#include <bits/stdc++.h>

using namespace std;

int N,m,M,T,R;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> m >> M >> T >> R;

    // N = 총운동시간
    // m = 초기 맥박
    // M = 최대 맥박
    // T = 증가하는
    // R = 감소하는

    int Mm = M-m;
    int score = 0;
    int cnt = 0;
    int all = 0;


    while(true){

        if(score < Mm && (score + T) <=Mm ){
            score += T;
            cnt ++;
        }else {
            if((score - R) >=0){
                score -= R;
            }else{
                if(Mm < T){
                    cout << -1;
                    break;
                }
                score = 0;
            }

        }
        //cout << score << "\n";
        all++;

        if(N==cnt){
            cout << all <<"\n";
            break;
        }

    }


















}