#include <bits/stdc++.h>

using namespace std;

int n;
int dp[1000000];

vector<int>arr;



int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ifstream cin;
    // cin.open("input.txt");

    cin >> n;

    vector<int> v = {1000000};
    vector<int> index_v;



    for (int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
        if (a > v.back()){
            v.push_back(a);
            index_v.push_back(v.size());
        }
        else{
            int idx = lower_bound(v.begin(), v.end(), a) - v.begin();
            if(i==0){
                index_v.push_back(1);
            }else{
                index_v.push_back(idx+1);
            }
            v[idx] = a ;
        }

        //cout << index_v[i] <<"\n";

    }


    int find_index = v.size();

    vector<int>ans;

    for (int i = n-1; i >=0 ; --i) {
        if(find_index == index_v[i]){
            ans.push_back(arr[i]);
            //cout << find_index << " " << index_v[i] <<" " << arr[i] <<"\n";

            find_index--;
        }
    }
    cout << v.size() << "\n";

    for (int i = ans.size()-1; i >=0 ; --i) {
        cout << ans[i] << " ";
    }
    cout << "\n";


}




















