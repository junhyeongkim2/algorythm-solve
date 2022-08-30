#include <bits/stdc++.h>

using namespace std;
int n ;

vector<int>v;

int main(){

    cin >> n;

    int sum=0;
    int div=0;

    for (int i = 0; i <n ; ++i) {
        int a ;
        cin >> a;
        sum += a;
        div += a/2;

    }

    if(sum%3!=0){
        cout << "NO";
    }else{
        if(sum/3 <= div){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
    

}