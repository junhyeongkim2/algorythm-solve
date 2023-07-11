#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int n,m;
vector<int>v;

int main() {
  cin >> n;

  for(int i = 0 ; i < n ; i++){
      int a;
      cin >> a;
      v.push_back(a);
  }
  cin >> m;

  sort(v.begin(),v.end());

  int left = 0;
  int right = v[n-1];
  int result,sum;

  while(left<=right){
      sum=0;
      int middle = (left+right)/2;
      for(int i = 0 ; i < v.size(); i++){
          sum += min(middle,v[i]);
      }
      if(m>=sum){
          result = middle;
          left = middle+1;
      }else{
          right = middle-1;
      }
  }

  cout << result <<"\n";





    return 0;
}