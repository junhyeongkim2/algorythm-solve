#include <bits/stdc++.h>
using namespace std;

int a, b ,c ;
vector<int>v;

bool check = false;

int main(){

    cin >> a>>b>>c;

    int amin=0;
    if(a>b){
        amin = a-b;
    }else{
        amin = b-a;
    }
    for (int i = 0; i <c ; ++i) {
        int temp;
        cin >> temp;

        if(temp>=b){
            if(temp-b < amin){
                check=true;
                amin = min(amin,temp-b);
            }
        }else if (temp<b){
            if(b-temp < amin)
                check=true;
            amin = min(amin,b-temp);
        }

    }
    if(check){
        cout << amin+1<<"\n";
    }else{
        cout << amin<<"\n";
    }


}