#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n ;
    vector<int>v1;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int a ;
        cin >> a;
        v1.push_back(a);
    }
    std::sort(v1.begin(), v1.end());

    int answer=0;

    for(int i = 1 ; i <= n ; i ++){
        for(int i1=0;i1<i;i1++){
            answer += v1[i1];
        }
        //cout <<answer<<"\n";


    }
    cout << answer;















}
