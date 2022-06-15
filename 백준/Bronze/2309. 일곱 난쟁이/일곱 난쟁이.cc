#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){


    vector<int>v1;
    int sum =0 ;
    for(int i = 0;i<9;i++){
        int a=0;
        scanf("%d",&a);
        v1.push_back(a);
        sum += a;
    }


    //cout << sum << "\n";

    std::sort(v1.begin(), v1.end());

    int save1 =0 ;
    int save2=0;

    for(int i = 0 ;i<9;i++){
        for(int i1=0;i1<9;i1++){
            if(i1!=i){
                //cout << i << " " << i1 << "\n";
                if((sum - (v1[i]+v1[i1])) == 100){
                    //cout << v1[i] << " " << v1[i1] << "\n";
                    save1=v1[i];
                    save2=v1[i1];
                    break;


                }




            }
        }
    }

    for(int i=0;i<9;i++){
        if(v1[i]!=save1 && v1[i]!=save2){
            cout << v1[i]<<"\n"    ;
        }

    }



}