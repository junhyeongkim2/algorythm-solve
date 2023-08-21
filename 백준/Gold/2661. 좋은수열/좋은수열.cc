#include <bits/stdc++.h>
using namespace std;

int N;

bool isBad(string str){
    int len = str.length();
    int half = len/2;
    for(int i = 1 ; i <= half; i++){
        string first = str.substr(len-(i*2),i);
        string second = str.substr(len-i,i);
        if(first == second){
            return true;
        }
    }
    return false;
}

void dfs(int index, string str){

    if(isBad(str)){
        return;
    }

    if(index == N){
        cout << str << "\n";
        exit(0);
    }
    
    dfs(index+1,str+'1');
    dfs(index+1,str+'2');
    dfs(index+1,str+'3');

}






int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    dfs(0,"");



    return 0;
}