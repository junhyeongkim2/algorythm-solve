#include<bits/stdc++.h>
using namespace std;


int n;
vector<int>v;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }


    vector<int>count(51);

    for(int i = 0 ; i < n ; i ++){
        double max = -1000000000;
        for(int j = i+1 ; j < n ; j++){
            if(max < double(v[i]-v[j])/double(i-j)){
                max = double(v[i]-v[j])/double(i-j);
                count[i]++;
                count[j]++;
            }
        }
    }

    cout << *max_element(count.begin(),count.end());









    return 0;

}