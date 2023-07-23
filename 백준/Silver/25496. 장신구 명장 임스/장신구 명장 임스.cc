#include <bits/stdc++.h>
using namespace std;



int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int p;
    int n;
    vector<int>v;
    cin >> p >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int ans =0;
    for(int i = 0 ; i < v.size(); i++){

        if(p<200){
            ans++;
            p+=v[i];
        }else{
            break;
        }


    }
    cout << ans << "\n";









    return 0;
}