#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m ;

    vector<int>v1;
    cin  >> n >> m;

    for(int i = 0 ; i < n;i++){
        int a= 0;
        cin >> a;
        v1.push_back(a);
    }

    int count = 0;
    bool flag =false;
    int ans=0;
    std::sort(v1.begin(), v1.end());

    /*
    for(int i=0 ; i< n;i++){
        cout << v1[i] << "\n";
    }
*/


    for(int i= 0 ; i < n;i++){
        ans++;
        for(int i1=i; i1<n;i1++){
            if(v1[i1] < (v1[i]+m)  ){
                count++;
            }
        }
        i+=(count-1);
        count=0;

    }
    cout << ans;





}