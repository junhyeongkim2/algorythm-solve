#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int n;
    cin >> n;
    string s;
    vector<string>v;

    for(int i = 0 ; i < n; i++){
        cin >> s;
        v.push_back(s);
    }

    int rowcount = 0;
    int colcount = 0;

    for(int i = 0 ; i < n ; i++){
        int count =0;
        for(int j = 0; j < s.length(); j++){
            if(v[i][j] =='.'){
                count++;
            }else{
                if(count>1){
                    rowcount++;
                }
                count = 0 ;
            }
        }
        if(count>1){
            rowcount++;
        }
    }

    for(int i = 0 ; i < n ; i++){
        int count =0;
        for(int j = 0; j < n; j++){
            if(v[j][i] =='.'){
                count++;
            }else{
                if(count>1){
                    colcount++;
                }
                count = 0;
            }
            //cout << count << " ";
        }
        //cout << "\n";
        if(count>1){
            //cout << "++"<<"\n";
            colcount++;
        }
    }

    cout << rowcount << " " << colcount << "\n";









    return 0;

}