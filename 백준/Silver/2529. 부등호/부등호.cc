#include <bits/stdc++.h>
using namespace std;

int n;
vector<char>pos;
int visited[10];


string maxnum="";
string minnum="";

bool flag = false;


void dfs(int depth, string number){

    if(number.length()==n+1){


        for(int i = 0 ; i < pos.size(); i++){
            if(pos[i]=='<'){
                if(number[i]-'0' > number[i+1]-'0' ){
                    return;
                }
            }else{
                if(number[i]-'0' < number[i+1]-'0' ){
                    return;
                }
            }
        }



        if(flag == false){
            minnum = number;
            maxnum = number;
            flag= true;
        }else{
            maxnum = number;
        }


//        cout << number << " / " <<  maxnum << " / " << minnum << " / " <<  depth <<  "\n";
    }

    for(int i = 0; i <= 9 ; i++ ){

        if(visited[i]==0){
            visited[i]=1;
            dfs(depth+1,number + to_string(i));
            visited[i]=0;
        }

    }

}



int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for(int i = 0 ; i < n; i++){
        char c;
        cin >> c;
        pos.push_back(c);
    }

    dfs(0,"");
//    cout << " - - - - - " << "\n";
    cout << maxnum << "\n";
    cout << minnum << "\n";




    return 0;
}