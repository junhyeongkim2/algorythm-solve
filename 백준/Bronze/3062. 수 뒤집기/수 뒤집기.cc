#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int T, numi;
  string num;
  bool flag;
  
  cin>>T;
  while(T--){
    cin>>num;
    numi = stoi(num);
    reverse(num.begin(),num.end());
    numi += stoi(num);
    num = to_string(numi);
    flag = true;
    for(int i=0;i<num.length()/2;i++){
      if(num[i]!=num[num.length()-1-i]){
        flag = false;
      }
    }
    if(flag){
      cout<<"YES\n";
    }else{
      cout<<"NO\n";
    }
  }
}