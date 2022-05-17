#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N ;
    vector<int> v ;
    vector<int> v2 ;

    for (int i =0 ; i<N;i++){
        int a ;
        cin >> a;
        v.push_back(a);
    }
    v2=v;
    sort(v.begin(),v.end());
    v.erase(std::unique(v.begin(), v.end()),v.end());
    for(int i =0;i<N;i++){
        // i번째 요소값의 위치 it
        auto it = lower_bound(v.begin(), v.end(), v2[i]);
        // it에서 cv벡터의 시작 주소값을 빼준 값이 답
        cout << it - v.begin() << ' ';    }
    return 0;
}

