#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

int N,M,L,K;

pair<int,int> coord[MAX];



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);


    cin >> N >> M >> L >> K;

    for(int i = 0 ; i < K; i++)
        cin >> coord[i].first >> coord[i].second;

    int result = 0;

    //i는 좌상단
    for(int i = 0 ; i < K; i++){
        //j는 우상단
        for(int j = 0 ; j < K; j++){
            int cnt = 0;
            //좌표가 범위 내에 있는지 확인

            for(int k = 0 ; k < K ; k++){
                if(coord[i].first<=coord[k].first && coord[k].first <= coord[i].first + L && coord[j].second <= coord[k].second && coord[k].second <= coord[j].second + L)
                    cnt++;
                result = max(result,cnt);
            }

        }
    }

    cout << K - result ;

    return 0;
}

