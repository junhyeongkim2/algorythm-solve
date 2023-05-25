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

        int arr[10001]={0,};
        vector<string>v;


        if(n==0){
            break;
        }
        cin.ignore();

        for(int i = 0 ; i < n; i++){
            string sa;
            getline(cin,sa);
            v.push_back(sa);
        }

        for(int i = 0 ; i < 2*n-1; i++){
            int a;
            char b;
            cin >> a;
            cin >> b;
            arr[a-1]++;
        }

        for(int i = 0 ; i < n; i++){
            //cout << arr[i] << "\n";
            if(arr[i] == 1 ){
                cout << cnt << " "<< v[i] << "\n";
            }
        }





    }


    return 0;
}