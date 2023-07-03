#include<bits/stdc++.h>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    int ans = 0;
    cin >> n;
    vector<int>v;

    for(int i = 0 ; i < n ; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());


    for(int i = 0 ; i < n ; i++){
        int l =0;
        int r = n-1;

        while(l<r){

            if(l==i){l++;continue;}
            if(r==i){r--;continue;}
            if(v[i]>v[l]+v[r]){l++;continue;}
            else if(v[i]==v[l]+v[r]){ans++; break;}
            else{r--;}
        }
    }
    cout << ans <<"\n";



    return 0;
}