#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
map<int,bool> m1 ;
int N,M;
int num;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M;

    for(int i = 0 ; i < N+M;i++){
        cin >> num;
        if(m1[num]==true){
            m1.erase(num);
        }else if (m1[num]==false){
            m1[num]= true;
        }
    }

    cout << m1.size();



    return 0;
}
