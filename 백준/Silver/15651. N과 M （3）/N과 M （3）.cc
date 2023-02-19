#include <bits/stdc++.h>
using namespace std;


int n,m;


void back(int now, int depth, vector<int> a){

    if(a.size()==m){
        for(auto x : a){
            cout << x << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 1 ; i <= n; i++){
        a.push_back(i);
        back(i,depth+1,a);
        a.pop_back();
    }

}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    vector<int>a;

    back(1,0,a);


}