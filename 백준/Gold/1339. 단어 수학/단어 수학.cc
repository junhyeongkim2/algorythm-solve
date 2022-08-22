#include <iostream>
#include <algorithm>

using namespace std;

int graph[26];
int N;
int main(){
    cin >> N;
    for(int i= 0 ; i < N ; i++){
        string s;
        cin >> s;
        int pow=1;
        for(int i1=s.length()-1;i1>=0;i1--){
            graph[s[i1]-'A'] += pow;
            pow*=10; 
        }
    }
    
    sort(graph,graph+26,greater<>());
    int answer=0;
    int cnt=9;
    
    for(int i = 0 ; i < 26;i++){
      
        answer += graph[i] * cnt--;
    }
    cout << answer << "\n";
    
    
    
    
   
    
    
}