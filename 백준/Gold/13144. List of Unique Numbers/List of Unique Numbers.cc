#include<bits/stdc++.h>
using namespace std;


int n;
long long int res;
int visited[100001];


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<int>arr(n);

    for(int i =0; i < n ;i++){cin >> arr[i];}

    int end = 0;
    for(int start = 0 ; start < n ; start++){
        while(end < n){
            if(visited[arr[end]])break;
            visited[arr[end]]=1;
            end++;
        }
        res += (end - start);
        visited[arr[start]]=0;
    }
    cout << res <<"\n";

    return 0;

}