#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n ;
    cin >> n;

    vector <int> plus;
    vector <int> minus;

    int zero = 0;
    int one = 0;

    for( int i  = 0 ; i < n;i++){
        int k;
        cin >> k ;
        if(k==1){
            one++;
        }else if(k>0){
            plus.push_back(k);
        }else if (k<0){
            minus.push_back(k);
        }else{
            zero ++;
        }
    }
    std::sort(plus.begin(), plus.end(),greater<int>());
    std::sort(minus.begin(), minus.end());
    if(plus.size()%2==1)plus.push_back(1);
    if(minus.size()%2==1)minus.push_back(zero>0?0:1);
/*
    for(int i = 0 ; i < minus.size();i++){
        cout << minus[i] << "\n";
    }
    cout << "\n";
    for(int i = 0 ; i < plus.size();i++){
        cout << plus[i] << "\n";
    }
*/
    int ans=0;
    for(int i = 0 ; i < plus.size();i+=2){
        ans+=plus[i]*plus[i+1];
    }
    for(int i = 0 ; i < minus.size();i+=2){
        ans+=minus[i]*minus[i+1];
    }
    ans = ans+one;
    cout << ans << "\n";













}