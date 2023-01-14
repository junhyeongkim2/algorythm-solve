#include <bits/stdc++.h>
using namespace std;




int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<int,vector<int>,greater<int>>pq1;
    priority_queue<int>pq2;

    for (int i = 0; i <n ; ++i) {
        int a=0;
        cin >> a;
        if(a < 0){
            pq2.push(a);
        }else if( a>0){
            pq1.push(a);
        }else if(a==0) {



            if(pq1.size()>0 && pq2.size()>0){
                int pq1top = pq1.top();
                int pq2top = pq2.top();
                if(abs(pq1top) > abs(pq2top)){
                    cout << pq2top << "\n";
                    pq2.pop();
                }else if ( abs(pq1top) < abs(pq2top) ){
                    cout << pq1top << "\n";
                    pq1.pop();

                }else if ( abs(pq1top) == abs(pq2top)){
                    pq2.pop();
                    cout << pq2top << "\n";
                }
            }else if (pq1.size()==0&&pq2.size()!=0){
                cout << pq2.top() << "\n";
                pq2.pop();
            }else if (pq2.size()==0&&pq1.size()!=0){
                cout << pq1.top() << "\n";
                pq1.pop();
            }else if(pq1.size()==0 && pq2.size()==0){
                cout << "0"<<"\n";
            }


        }

    }








}
