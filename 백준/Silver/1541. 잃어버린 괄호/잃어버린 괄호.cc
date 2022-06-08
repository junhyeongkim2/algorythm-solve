#include <iostream>
using namespace std;
bool flag=false;
int main(){
    string s;
    cin >> s;
    int le = s.size();
    
    int answer=0;
    int temp=0;
    
    for(int i=0;i<=le;i++){
        if(s[i]=='+'||s[i]=='-'||i==le){
            if(flag==false){
                answer+=temp;
                temp=0;
            }else{
                answer-=temp;
                temp=0;
            }
            
            if(s[i]=='-'){
                flag=true;
            }
        }else{
            temp*=10;
            temp+=s[i]-'0';
            
        }        
    }
    cout << answer;
    
    
    
    
}