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
    int count=0;
    int answer=0;

    for(int i=0 ; i <N;i++){
        int a= 0 ;
        cin >> a;
        if(a==count){
            answer++;
            count++;

        }

        if(count>=3){
            count =0;
        }

    }

    cout << answer;









}





