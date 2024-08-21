#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;



vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {

    deque<string> binaryV1; 
    deque<string> binaryV2; 
    
    for(int i = 0 ; i < arr1.size(); i++ ){
        
        string temp = "";
        
        while(temp.size() < n){
        
            int a = arr1[i] % 2;

            temp+=to_string(a);
        
            arr1[i] /= 2;    
        }
        reverse(temp.begin(),temp.end());
        
        binaryV1.push_back(temp);
    }
    
    for(int i = 0 ; i < arr2.size(); i++ ){
        
        string temp = "";
        
        while(temp.size() < n){
        
            int a = arr2[i] % 2;

            temp+=to_string(a);
        
            arr2[i] /= 2;    
        }
        
 
        reverse(temp.begin(),temp.end());
        
        binaryV2.push_back(temp);
    }
    

    vector<string> answer;

    
    for(int i = 0 ; i < n; i++){
        cout << binaryV1[i] << "\n";
        cout << binaryV2[i] << "\n";
        cout << "\n";
        
        string s = "";
        for(int j = 0 ; j < n ; j++){
            
            if(binaryV1[i][j] == '1' || binaryV2[i][j] =='1'){
                cout <<"#";
                s+="#";
            }else{
                cout<< " ";
                s+=" ";
            }
            
        }
        cout << "\n";
        answer.push_back(s);
    }
    
    
    
    
    return answer;
}