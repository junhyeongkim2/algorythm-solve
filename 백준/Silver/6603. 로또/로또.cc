#include <iostream>
#include <vector>

using namespace std;


vector<int> graph;
int a ;

int arr[7];

void back(int node,int le){

    if(le==6){
        for (int i = 0; i <6 ; ++i) {
            cout << arr[i]<<" ";
        }
        cout << "\n";
        return;
    }
    for(int i = node; i < a;i++){
        arr[le] = graph[i];
        back(i+1,le+1);
    }

}




int main(){

    while(true){
        cin >> a;
        if( a==0){
            break;
        }

        for (int i = 0; i <a ; ++i) {
            int b;
            cin >> b;
            graph.push_back(b);
        }

        back(0,0);
        cout << "\n";
        graph.clear();


    }
}