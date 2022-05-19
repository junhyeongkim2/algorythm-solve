#include <iostream>
#include <map>
#include <string>

using namespace std;


int main(){

    int N, M ;
    map<string , bool >m1;

    cin >> N >> M;

    for(int i = 0 ; i< N; i++){
        string s ;
        cin >> s ;
        m1[s] = true;
    }

    int answer=0;
    for(int i = 0 ; i<M;i++){
        string s ;
        cin >> s ;
        if(m1[s]){
            answer++;
        }




    }
    cout << answer;





}