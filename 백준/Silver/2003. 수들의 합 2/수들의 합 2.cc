#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A[10001] = {0};
    int N, M;
    int l = 0, h = 0;//low, high
    int sum = 0, cnt = 0;

    cin >> N >> M;
    for(int i = 0; i < N; i++)
        cin >> A[i];

    while(1){
        if(sum >= M) sum -= A[l++];
        else if(h == N) break;
        else sum += A[h++];
        if(sum == M) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}



