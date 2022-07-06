#include <iostream>
#include <stack>
using namespace std;


stack<int>s1;

int main(){



    int N ;
    cin >> N;


    for(int i = 0 ; i < N ; i ++){
        string s;
        cin >> s;
        if(s=="push"){
            int a=  0;
            cin >> a;
            s1.push(a);

        }
        if(s=="pop"){

            if(s1.size()>0){
                cout << s1.top() << "\n";
                s1.pop();

            }else{
                cout << -1<<"\n";
            }
        }
        if(s=="size"){
            cout << s1.size()<<"\n";
        }
        if(s=="empty"){
            if(s1.size()==0){
                cout << 1<<"\n";
            }else{
                cout << 0 << "\n";
            }

        }
        if(s=="top"){
            if(s1.size()>0){
                cout << s1.top() << "\n";
            }else{
                cout << -1 << "\n";
            }

        }


    }

}