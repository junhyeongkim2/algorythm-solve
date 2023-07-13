#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int main() {


    vector<int>v;
    int n,x;
    cin >> n>>x;

    for(int i= 0 ; i < n ;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    long long int sum=0;


    for(int i = 0 ; i < x; i++){
        sum+=v[i];
    }
    //cout << sum << "\n";

    long long int maxsum=sum;

    int ans =1;

    for(int i = 1 ; i < n && i < (n-x)+1; i++){
        sum-= v[i-1];
        sum+=v[i+(x-1)];

        if(maxsum <= sum){
            if(maxsum == sum && maxsum!=0){
                ans++;
            }else{
                ans=1;
                maxsum= sum;
            }
        }
        //cout << sum << " " << v[i+(x-1)] << "\n";
    }


    if(maxsum==0){
        cout << "SAD" << "\n";
    }else{
        cout << maxsum << "\n";
        cout << ans << "\n";
    }

    return 0;
}