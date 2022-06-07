#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n ;
    cin >> n ;
    vector<int>v1;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int>v2;
    for(int i = 0; i < n ; i ++){
        int a;
        cin >> a;
        v1.push_back(a);
    }
    std::sort(v1.begin(), v1.end(),greater<int>());
    int result=0;
    for(int i1=0; i1<n; i1++){
        if (result < v1[i1]*(i1+1)){
            result = v1[i1]*(i1+1);
        }
    }


    cout << result;





    return 0;


}
