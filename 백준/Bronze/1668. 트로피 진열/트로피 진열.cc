#include<bits/stdc++.h>
using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a;
    vector<int>v;
    cin >> a;

    for(int i = 0 ; i < a; i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int left=1;
    int right=1;

    int temp1=v[0];
    int temp2=v[v.size()-1];


    for(int i = 1 ; i < v.size();i++){
        if(v[i] > temp1){
            temp1=v[i];
            left++;
        }
        //cout << left << "\n";
    }
    for(int i = v.size()-1 ; i > 0;i--){
        if(temp2 < v[i-1]){
            temp2 = v[i-1];
            right++;
        }
    }
    cout << left << "\n";
    cout << right << "\n";







}