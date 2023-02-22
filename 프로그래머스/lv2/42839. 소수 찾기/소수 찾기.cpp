#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool check[10000000];

bool isPrime(int n){
    
    if(n==0 || n==1){
        return 0;
    }
    for(int i = 2 ; i <= sqrt(n); i++){
        if(n%i==0)return 0;
    }
    return 1;
    
   
}

int solution(string numbers) {
    
    
    vector<char>v;
    vector<int>v2;

    
    for(int i = 0 ; i < numbers.size();i++){
        v.push_back(numbers[i]);
    }
    
    sort(v.begin(),v.end());
    
    do{
        string temp="";
        for(int i = 0 ; i < v.size(); i++){
            temp+=v[i];
            v2.push_back(stoi(temp));
            cout << stoi(temp) <<"\n";
 
        }
    }while(next_permutation(v.begin(),v.end()));
    
    int ans =0;
    
    sort(v2.begin(),v2.end());

    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    
    
    for(auto x : v2){
        if(isPrime(x)){
            ans++;
        }
    }
    return ans;
    
    
    
}