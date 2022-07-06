#include <queue>
#include <iostream>

using namespace std;


priority_queue<int,vector<int>,greater<int>>q1;

int N;


int main(){

    cin >> N;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i = 0 ; i < N; i ++){
        long long a;
        cin >> a;

        if(a==0){
            if(!q1.empty()){
                long long  b = q1.top();
                q1.pop();
                cout << b << "\n";
                //cout << "notempty"<<"\n";
            }else{
                cout << 0 <<"\n";
                //cout << "isempty" << "\n";
            }
        }else{
            q1.push(a);
        }

        //cout << a << "\n";





    }












}

