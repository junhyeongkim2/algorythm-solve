/*
#include <queue>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    int count = 0;
    count = s2.size();
    int count2 = 0 ;
    int count3 = 0 ;
    int answer=0;
    for(int i = 0 ; i < s1.size(); i++ ){
        for(int i1=0;i1<s2.size();i1++){
            if(s1[i]==s2[i1]){
                count++;
            }
            if(count == s2.size()){
                answer++;
            }
        }
    }
    cout <<answer;
}
 */

#include <iostream>
#include <vector>
using namespace std;



int main(){
    int N;
    cin >> N;

    int div=0;




    for(int i=0;i<N;i++){
        int a = 0 ;
        cin >> a;
        int v1[4]={0};

        for(int i1=0;i1<4;i1++){

            if( a>=25){
                div = a / 25;
                a = a%25;
                v1[0]=div;
                if(a==0){
                    break;
                }
            }

            else if(a>=10){
                div = a / 10;
                a = a%10;
                v1[1]= div;
                if(a==0){
                    break;
                }
            }

            else if(a>=5){
                div = a / 5;
                a = a%5;
                v1[2] = div;
                if(a==0){
                    break;
                }
            }
            else if(a>=1){
                div = a / 1;
                a = a%1;
                v1[3]= div;
                if(a==0){
                    break;
                }
            }

        }
        cout << v1[0] << " " << v1[1] << " " << v1[2] << " " << v1[3] << "\n";




    }













}





