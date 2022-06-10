#include <queue>
#include <iostream>
#include <map>
using namespace std;


int main()
{
    string s1 , s2;
    cin >> s1 >> s2;
    int count =1;
    long long int a = 0;
    long long int b = 0;
    long long int c = 0;





    while(true){
        if (s1 == s2){
            cout << 1;
            break;
        }

        if(s2[s2.size()-1] == '1' ){
            count++;
            s2.erase(s2.size()-1);
            if(stoi(s2)< stoi(s1)){
                cout << -1;
                break;
            }
            if(stoi(s2) == stoi(s1)){
                cout << count;
                break;
            }



        }else{
            count++;
            a = stoi(s2);
            b = a/2;
            c = a%2;
            if(c!=0){
                cout << -1;
                break;
            }


            s2 = to_string(b);

            if(stoi(s2)== stoi(s1)){
                cout << count ;
                break;
            } else if (stoi(s2)<stoi(s1)){
                cout << -1;
                break;
            }



        }
    }











}






