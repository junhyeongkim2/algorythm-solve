
#include <iostream>

using namespace std;

int main(){
    int ans = 0;
    int n = 0 ;
    cin >> n;
    for(int i = 5 ; i <= n; i*=5){
        ans += n/i;
    }
    cout << ans;
    
    
    
}
