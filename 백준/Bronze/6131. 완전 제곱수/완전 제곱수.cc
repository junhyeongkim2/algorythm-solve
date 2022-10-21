#include <bits/stdc++.h>

using namespace std;


int n ;
int main() {
    
    cin >> n;
    int cnt=0;

    for (int i = 1; i <= 500; ++i) {
        for (int j = 1; j <=500; ++j) {
            if( n == (pow(i,2) - pow(j,2)) ){
                cnt++;
                //cout << sqrt(j) + n << "\n";
            }

        }
    }

    cout << cnt<<"\n";
    
    
    
    
 
}