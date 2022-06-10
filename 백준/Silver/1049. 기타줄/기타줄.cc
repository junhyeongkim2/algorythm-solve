#include <queue>
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }

    std::sort(v1.begin(), v1.end());
    std::sort(v2.begin(), v2.end());
    int c1 = 0;
    int c2 = 0;
    float c3 = 0;
    c3 = v1[0] / 6;

    if (c3 >= v2[0]) {
        cout << v2[0] * N;
    } else {
        if (N % 6 == 0) {
            cout << (N / 6) * v1[0];
        }else{
            if( ((N/6)+1)*v1[0] < ((N/6)*v1[0] + ((N%6)*v2[0])) ){
                cout << (((N/6)+1)*v1[0]);
            }else{
                cout << ((N/6)*v1[0] + ((N%6)*v2[0]));
            }

        }

    }
}