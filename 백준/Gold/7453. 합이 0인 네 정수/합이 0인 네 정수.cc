#import <bits/stdc++.h>
using namespace std;

int n;
int arr[4001][4];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    vector<int>a;
    vector<int>b;


    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++){
            a.push_back(arr[i][0]+arr[j][1]);
            b.push_back(arr[i][2]+arr[j][3]);
        }
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    long long int ans = 0 ;

    for(int i = 0 ; i < a.size();i++){
        int B_pre = lower_bound(b.begin(),b.end(),-a[i]) - b.begin();
        int B_end = upper_bound(b.begin(),b.end(),-a[i]) - b.begin();
        ans += (B_end - B_pre) ;
    }

    cout << ans << "\n";













}