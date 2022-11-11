#include <bits/stdc++.h>
using namespace std;

int arr[9];



int main() {


    for (int i = 0; i < 9; ++i) {
        cin >> arr[i];
    }



    bool check = false;


    for (int i = 0; i <9 ; ++i) {
        for (int j = i+1; j <9 ; ++j) {
            //cout << arr[i] << " " << arr[j] << "\n";
            int sum = 0;
            vector<int>v1;


            for (int k = 0; k <9 ; ++k) {
                if(arr[k]!= arr[i] && arr[k]!= arr[j] ){
                    sum+=arr[k];
                    v1.push_back(arr[k]);
                    //cout << sum <<"\n";
                }
            }
            if(sum==100){
                //cout << sum;
                //cout << "ending" <<"\n";

                for (int k = 0; k <v1.size() ; ++k) {
                    cout << v1[k] <<"\n";

                }
                check=true;
                break;

            }


        }
        if(check==true)break;
    }





















}