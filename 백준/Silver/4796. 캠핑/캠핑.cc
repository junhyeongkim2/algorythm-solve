#include <queue>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()
{

    int a , b, c;

    int count =0 ;
    while(true){
        count ++;
        cin >>  a >> b >> c;
        if( a == 0 &&b==0&& c== 0 ){
            break;
        }
        int d = 0;
        int answer = 0;
        d = c / b;
        int per = c - (b * d) ;
        answer += (d * a);
        if( a < per){
            answer += a;
        }else{
            answer += per;

        }


        cout << "Case "<<count<<": " << answer << "\n";
    }
}






