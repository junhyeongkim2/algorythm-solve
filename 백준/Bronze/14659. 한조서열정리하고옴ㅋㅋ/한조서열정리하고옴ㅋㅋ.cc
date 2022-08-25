#include <bits/stdc++.h>
#include <vector>
using namespace std;

int n;

vector<int>v1;
vector<int>v2;
int main(){

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int a = 0;
        cin >> a;
        v1.push_back(a);
    }

    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = i; j < n; ++j) {
            if(v1[i]<v1[j]){
                break;
            }
            cnt++;
        }
        v2.push_back(cnt);
        //cout << cnt <<"\n";
    }

    std::sort(v2.begin(), v2.end(),greater<int>());

    cout << v2[0]-1;







}