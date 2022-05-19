#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
map<string,bool> m1 ;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N,M;
    cin >> N >> M;

    for(int i =0 ; i < N;i++){
        string s;
        cin >> s;
        m1[s]=true;
    }
    int answer=0;

    vector<string>v1(N);

    for(int i=0;i<M;i++){
        string s;
        cin >> s;
        if(m1[s]){
            v1[answer] = s;
            answer++;
        }
    }

    cout << answer << '\n';

    std::sort(v1.begin(), v1.end());

    for(auto i : v1){
        if(i!=""){
            cout << i << '\n';

        }
    }

    return 0;
}
