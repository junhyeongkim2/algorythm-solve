/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,temp,id,len;
int a[1001],dp[1001];
vector<int> arr;

int main() {
    cin >> n;

    for(int i=1;i<=n;i++) {1
        cin >> a[i];
        len=0;

        for(int j=1;j<i;j++) {
            if(a[i]>a[j])
                len=max(dp[j],len);
        }
        dp[i]=len+1;
        cout << dp[i]<<"\n";

        if(temp<dp[i]) {
            temp = dp[i];
            id = i;
        }
    }

    cout << temp;
*/


#include <iostream>
#include <vector>

using namespace std;

int arr[1001];
vector<int> dp(1001, 1);

int main()
{
    int n;
    cin >> n;

    int index =0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]){
                dp[i] = max(dp[j] + 1, dp[i]);
            }

        }
        //cout << dp[i] << "\n";
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i]);

    cout << ans << "\n";

    for( int i = 0; i<n;i++){
        if(dp[i] == ans){
            index=i;
        }
    }

    vector <int>v1;

    for(int i=index;i>=0;i--){
        if(ans==dp[i]){
            v1.push_back(arr[i]);
            ans--;
        }
    }


    while(v1.size()){
        cout << v1.back() << " ";
        v1.pop_back();
    }









    return 0;
}

    /*

    for(int i=id;i>=1;i--) {
        if(temp==dp[i]) {
            arr.push_back(a[i]);
            temp--;
        }
    }

    int size=arr.size();
    cout <<size<<"\n";

    for(int i=0;i<size;i++) {
        cout << arr.back()<<" ";
        arr.pop_back();
    }
     */

