#include <bits/stdc++.h>


using namespace std;

vector<int>v1;

int main(){


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i <5 ; ++i) {
        int a;
        cin >> a;
        v1.push_back(a);
    }

    int cnt=0;
    int cnt2=0;

    std::sort(v1.begin(), v1.end());

    bool check=false;
    while(true){
        cnt++;

        for (int i = 0; i <5 ; ++i) {
            if (cnt % v1[i] == 0 ){
                cnt2++;
                if(cnt2>=3){
                    cout << cnt <<"\n";
                    check=true;
                    break;
                }
            }
        }
        if(check)break;
        cnt2=0;
    }











}