#include <bits/stdc++.h>
using namespace std;

int n;
int m;

int graph[201];


int getParent(int x){
    if(graph[x] == x){
        return x;
    }
    return graph[x] = getParent(graph[x]);
}

void unionParent(int a, int b){

    a= getParent(a);
    b = getParent(b);
    if(a==b)return;
    graph[a]=b;
    getParent(a);


}



int main(){
    
    cin >> n;
    cin >> m;


    for (int i = 0; i <=200 ; ++i) {
        graph[i]=i;
    }


    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=n ; ++j) {
            int a;
            cin >> a;
            if(a==1){
                unionParent(i,j);
            }
        }
    }



    int past,here;
    bool check =true;
    cin >> past;

    for (int i = 1; i <m ; ++i) {
        cin >> here;
        if(!check)continue;
        if(getParent(past) != getParent(here)){
            check = false;
        }
        past=here;

    }

    if(check){
        cout << "YES";
    }else{
        cout << "NO";
    }






    



}






