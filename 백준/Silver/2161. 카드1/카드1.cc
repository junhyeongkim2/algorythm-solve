#include <bits/stdc++.h>
using namespace std;


deque<int>dq;

int main(){


    int n;
    cin >> n;


    for(int i = 1 ; i <= n ; i++){
        dq.push_back(i);
    }


    while(!dq.empty()){

            cout << dq.front() << " ";
            dq.pop_front();
            int temp = 0;
            if(dq.size()>0){
                temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
            }



    }




}