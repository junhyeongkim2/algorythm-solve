#include <iostream>
#include <queue>
using namespace std;
queue<int>q1;

int main(){

    int N ;
    cin >> N;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    for(int i = 0 ; i < N ; i ++){
        string s;
        cin >> s;
        if(s=="push"){
            int a=  0;
            cin >> a;
            q1.push(a);

        }
        if(s=="pop"){

            if(q1.size()>0){
                cout << q1.front() << "\n";
                q1.pop();

            }else{
                cout << -1<<"\n";
            }
        }
        if(s=="size"){
            cout << q1.size()<<"\n";
        }
        if(s=="empty"){
            if(q1.size()==0){
                cout << 1<<"\n";
            }else{
                cout << 0 << "\n";
            }

        }
        if(s=="front"){
            if(q1.size()>0){
                cout << q1.front() << "\n";
            }else{
                cout << -1 << "\n";
            }

        }
        if(s=="back"){

            if(q1.size()>0){
                cout << q1.back() << "\n";
            }else{
                cout << -1 << "\n";
            }
        }



    }

}