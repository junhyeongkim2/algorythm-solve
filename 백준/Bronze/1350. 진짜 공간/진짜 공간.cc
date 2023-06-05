#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int n;

vector<long long int>v;

int main() {

    cin >> n;

    long long int size =0;


    for(int i = 0 ; i < n ; i ++){
        long long int a;
        cin >> a;
        v.push_back(a);
    }

    cin >> size;

    long long int ans = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] / size == 0 && v[i]!=0){
            ans += size;
        }else if(v[i]/size > 0 && v[i]!=0){
            ans += size * (v[i]/size);
            if(v[i]%size>0){
                ans+=size;
            }
        }
    }

    cout << ans << "\n";











    return 0;
}