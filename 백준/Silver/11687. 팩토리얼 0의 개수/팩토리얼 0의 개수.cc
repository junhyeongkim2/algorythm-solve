#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll m;


ll count5func(ll mid){
    ll tmp=0;

    while(mid>=5){
        mid /= 5;
        tmp += mid;
    }
    return tmp;
}

int main() {

    cin >> m;

    ll low = 5;
    ll high = 5e9+1;

    while(low<high){
        ll mid = (low+high)/2;
        ll count5 = count5func(mid);
        if(count5 < m){
            low = mid+1;
        }else{
            high = mid;
        }
    }

    if(m== count5func(high)){
        cout << high;
    }else{
        cout << -1;
    }






}













