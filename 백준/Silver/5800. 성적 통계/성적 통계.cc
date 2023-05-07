#include <bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    int temp=k;

    while(k--){
        int n;
        vector<int>v;
        int maxresult=0;
        int minresult=101;
        int maxminus=0;
        cin >> n;
        for(int i = 0; i<n; i++){
            int a;
            cin >> a;
            v.push_back(a);
            maxresult = max(maxresult,a);
            minresult = min(minresult,a);
        }
        sort(v.begin(),v.end(),greater<>());

        for(int i = 1 ; i < n ; i++){
            int temp = v[i-1] - v[i];
            maxminus = max(temp,maxminus);
        }




        cout << "Class " << temp-k << "\n";
        cout << "Max " << maxresult << ", " << "Min " << minresult << ", " << "Largest gap " << maxminus << "\n";


    }


    return 0;



}