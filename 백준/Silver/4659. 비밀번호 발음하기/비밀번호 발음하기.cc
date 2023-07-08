#include <iostream>
#include <vector>

using namespace std;

int main() {




    string s;
    while(1){

        cin >> s;
        if( s=="end"){
            break;
        }

        bool isAeiou=false;
        int isThree1=0;
        int isThree2=0;
        bool isThree1Bool=false;
        bool isThree2Bool=false;
        bool isContinue=false;



        for(int i = 0 ; i < s.size(); i++){

            if(s[i]==s[i-1] && i>0){
                if(s[i]=='e' && s[i-1]=='e'){
                }else if(s[i]=='o'&&s[i-1]=='o'){
                }else{
                    isContinue=true;
                    break;
                }
            }

            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                isThree1++;
                isThree2=0;
                if(isThree1>=3){
                    isThree1Bool=true;
                    break;
                }
                isAeiou=true;
            }else{
                isThree1=0;
                isThree2++;
                if(isThree2>=3){
                    isThree2Bool=true;
                    break;
                }
            }
        }


        if(isThree1Bool||isThree2Bool||isContinue||(!isAeiou)){
            cout << "<" << s << ">" << " is not acceptable." << "\n";
        }else{
            cout << "<" << s << ">" << " is acceptable." << "\n";
        }


    }


    return 0;
}