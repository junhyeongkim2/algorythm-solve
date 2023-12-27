#include <bits/stdc++.h>

using namespace std;

int main(){
    int p;
    int student[20];
    cin >> p;

    while(p--){
        int cnt = 0;
        int t;
        cin>> t;
        for(int i = 0 ; i < 20; i++ ){
            cin >> student[i];
        }

        for(int i = 0 ; i < 20; i++){
            for(int j = 0; j < i; j++){
                if(student[i] < student[j]) {
                    cnt++;
                }
            }
        }
        cout << t << " " << cnt << "\n";

    }

}