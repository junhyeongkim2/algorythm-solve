#include<bits/stdc++.h>

using namespace std;

int n;

vector<int>v;

int main() {

    cin >> n;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
     }

    int left = 0;
    int right = n-1;
    int res = abs(v[left]+v[right]);

    int ansleft = v[left];
    int ansright = v[right];

    while(left<right){
        int temp = v[left]+v[right];
        if(abs(temp) < res){
            res = abs(temp);
            ansleft = v[left];
            ansright = v[right];
        }
        if(temp<0){
           left++;
        }else{
            right--;
        }
        //cout << left << " " << right << " "<< res << "\n";

    }
    cout << ansleft << " " << ansright <<"\n";

	return 0;
}