#include<cstdio>
#include<bits/stdc++.h>
using namespace std;


int n;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;


    int arr[100001];

    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);




    int sum=0;

    for(int i = 0 ; i < n ; i ++){

        sum+=arr[i];

        if(sum<((i+1)*i/2) ){
            cout<<-1;
            return 0;
        }

    }

    if(sum == (n * (n-1))/2)
        cout << 1;
    else
        cout << -1;

    return 0;


}