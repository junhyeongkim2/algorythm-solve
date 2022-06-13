#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int a[51][51];
int b[51][51];

int main(){
    int n,m ;
    cin >> n >> m;

    vector<vector<int>> v1;

    for(int i=0;i<n;i++){
        for(int i1=0;i1<m;i1++){
            scanf("%1d",&a[i][i1]);
        }
    }


    for(int i=0;i<n;i++){
        for(int i1=0;i1<m;i1++){
            scanf("%1d",&b[i][i1]);
        }
    }

    int ans = 0 ;

    for(int i = 0 ; i<n-2 ; i++){
        for(int i1 = 0 ; i1 <m-2;i1++){
            if(a[i][i1]!= b[i][i1]){
                ans++;
                for(int j=0; j < 3; j++){
                    for(int k=0; k<3;k++){
                        if(a[i+j][i1+k]==1){
                            a[i+j][i1+k]=0;
                        }else{
                            a[i+j][i1+k]=1;
                        }
                    }
                }
            }


        }
    }

    int count=0;

    for(int i=0;i<n;i++){
        for(int i1=0;i1<m;i1++){
            if(a[i][i1]== b[i][i1]){
                count++;
            }
        }
    }


    if(count == (n*m)){
        cout << ans++;
    }else{
        cout << -1;
    }



















}