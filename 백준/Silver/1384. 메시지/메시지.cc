#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int cnt=0;
    while(true){
        cnt++;



        int n;
        cin >> n;

        if(n==0){
            break;
        }

        cout << "Group " << cnt <<"\n";

        vector<string>names;
        vector<char>PN[21];


        bool flag=true;

        for(int i = 0 ; i < n ; i ++){
            string s;
            cin >> s;
            names.push_back(s);

            for(int j  = 0 ; j < n-1; j++){
                char pn;
                cin >> pn;

                if(pn=='N'){
                    flag=false;
                }
                PN[i].push_back(pn);
            }

        }

        if(flag){
            cout << "Nobody was nasty"<<"\n";
            cout << "\n";
            continue;
        }


        for(int i = 0; i < n; i++){
            for(int j = 0 ; j < n-1;j++){
                //cout << i << " " << j << " " << PN[i][j] <<"\n";
                if(PN[i][j]=='N'){
                    int idx = i-(j+1);
                    if(idx<0){
                        idx = (n)+idx;
                    }
                    cout << names[idx] << " was nasty about " << names[i] << "\n";
                }
            }


        }
        cout <<"\n";






    }





    return 0;
}