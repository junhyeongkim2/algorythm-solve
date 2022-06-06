#include <vector>
#include <iostream>
using namespace std;

int main(){

    int n,k;

    cin >> n >> k;

    vector<int>money;

    for(int i = 0 ; i < n; i++){
        int coin;
        cin >> coin;
        money.push_back(coin);
    }

    bool flag = true;
    int answer=0;
    int a = k;
    int b = 0;
    int count = n -1;

    while(flag==true){
        if(money[count] <= a ){
            b = a / money[count];
            a = a%money[count];
            if(a==0) {
                answer+=b;

                break;

            }

            answer+=b;
        }
        count--;
    }
    cout<<answer;










}
