#include <bits/stdc++.h>

using namespace std;

int arr[100010];


int x;
int n;

int main() {

    cin >> x >> n;

    int ans =0;
    for (int i = 0; i <n ; ++i) {
        int a, b;
        cin >> a >> b;
        ans += a*b;
    }

    if(x==ans){
        cout << "Yes";
    }else{
        cout << "No";
    }






}













