#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>v;
int b,c;

int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> b >> c ;


    long long int ans = 0;
    for(int i = 0 ; i < n ; i++){


        if(v[i] / b != 0){
//            cout << v[i] << " / " << b  << " = "<< v[i]/b <<"\n";
            ans++;
            v[i] = v[i] - b;

            if(v[i]>0){
                ans += (v[i] / c);
                if(v[i] % c != 0 ){
//                    cout << "not !!!" <<"\n";
                    ans++;
                }

            }

        }else{
            ans++;
        }





    }

    cout << ans << "\n";







    return 0;
}