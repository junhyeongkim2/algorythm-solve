#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s="";
    int n;
    int a=0;
    int arr[21]={0,};

    cin >> n;

    for(int i = 0; i<n;i++){\
        cin >> s;

        if(s=="add"){
            cin >> a;
            if(arr[a]==0){
                arr[a]=1;
            }
        }
        else if(s=="remove"){
            cin >> a;
            if(arr[a]==1){
                arr[a]=0;
            }
        }
        else if(s=="check"){
            cin >> a;
            if(arr[a]==0){
                cout << "0"<<"\n";
            }else{
                cout << "1"<<"\n";
            }
        }
        else if(s=="toggle"){
            cin >> a;
            if(arr[a]==1){
                arr[a]=0;
            }else{
                arr[a]=1;
            }
        }
        else if(s=="all"){
            for(int i = 1 ; i <= 20;i++){
                arr[i]=1;
            }
        }
        else if(s=="empty"){
            memset(arr,0,sizeof(arr));
        }



    }




}