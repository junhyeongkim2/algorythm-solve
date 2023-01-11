#include <bits/stdc++.h>
using namespace std;


int n,m;

int graph[500001];



int getParent(int x){

    if(x == graph[x]){
        return x;
    }
    return graph[x] = getParent(graph[x]);

}

bool unionParent(int a, int b){

    a = getParent(a);
    b = getParent(b);

    if(a==b){
        return true;
    }else{
        if(a>b){
            graph[a] = b;
        }else{
            graph[b] = a;
        }
        return false;
    }

}



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i <n ; ++i) {
        graph[i] = i ;
    }


    bool check = false;

    for (int i = 0; i <m ; ++i) {
        int a, b;
        cin >> a >> b;
        if ( unionParent(a,b) == true ){
            cout << i+1 << "\n";
            check = true;
            break;
        }
    }

    if(check == false){
        cout << "0" << "\n";
    }



}






