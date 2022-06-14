#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

int main(){

  cin >> N;
  vector <int> v1;


  for(int i = 0 ; i < N;i++){
      int a =0;
      cin >> a;
      v1.push_back(a);
  }
  int size = v1.size()-1;
  int save=0;
  int count=0;
  if(N>1){
      save = v1[size];
      for(int i=size-1; i >=0 ; i--){
          if(save<=v1[i]){
              while(save<=v1[i]){
                  v1[i]--;
                  //cout << v1[i]<< " "<< i<<"\n";
                  count++;
              }
          }
          save=v1[i];



      }
  }else{
      cout << 1<<"\n";
  }

  cout << count;








}

