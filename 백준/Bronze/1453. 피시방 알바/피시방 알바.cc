#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <bool> v1={false};

    int n = 0 ;
    cin >> n ;
    int answer=0;

    for(int i = 0 ; i < n ; i++){
        int a = 0;
        cin >> a;

        if(v1[a]==false){
            v1[a]=true;
        }else{
            answer++;
        }



    }

    cout << answer;






}