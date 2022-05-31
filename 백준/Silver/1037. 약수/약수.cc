#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

    int n ;
    cin >> n;
    vector<int>v1;
    for(int i = 0 ; i < n;i++){
        int in =0;

        cin >> in ;
        v1.push_back(in);
    }

    std::sort(v1.begin(), v1.end());

    int size = v1.size();




    cout << (v1[0] *v1[size-1]);








}
