#include <bits/stdc++.h>
using namespace std;

int N ,M;

vector<int>crain;
vector<int>box;

int main(){

    cin >> N;
    for (int i = 0; i < N; ++i) {
        int a;

        cin >> a;
        crain.push_back(a);

    }
    cin >> M;

    for (int i = 0; i < M; ++i) {
        int a = 0;
        cin >> a;
        box.push_back(a);
    }

    int ans=0;


    sort(crain.begin(),crain.end(),greater<int>());
    sort(box.begin(),box.end(),greater<int>());

    if(crain[0] < box[0] ){
        cout << -1;
    }else{
        while(!box.empty()){
            for (int i = 0; i <crain.size() ; ++i) {
                for (int j = 0; j <box.size() ; ++j) {
                    if(crain[i]>=box[j]){
                        //cout << " before "<<box[j] << "\n";
                        box.erase(box.begin()+j);
                        //cout << " erased "<<box[j] << "\n";
                        break;
                    }
                }
            }

            ans++;
        }
        cout << ans << "\n";

    }













}