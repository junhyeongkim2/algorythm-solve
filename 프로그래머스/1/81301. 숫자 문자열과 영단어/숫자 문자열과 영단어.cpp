#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> findNumber(int index, string s){
    
    int findIndex = 0;
    int wordLength = 0;
    
    if(index == 0){
        findIndex = s.find("zero");
        wordLength = 4;
    }
    if(index == 1){
        findIndex = s.find("one");
        wordLength = 3;
    }
    if(index == 2){
        findIndex = s.find("two");
        wordLength = 3;
    }
    if(index == 3){
        findIndex = s.find("three");
        wordLength = 5;
    }
    if(index == 4){
        findIndex = s.find("four");
        wordLength = 4;
    }
    if(index == 5){
        findIndex = s.find("five");
        wordLength = 4;
    }
    if(index == 6){
        findIndex = s.find("six");
        wordLength = 3;
    }
    if(index == 7){
        findIndex = s.find("seven");
        wordLength = 5;    
    }
    if(index == 8){
        findIndex = s.find("eight");
        wordLength = 5;        
    }
    if(index == 9){
        findIndex = s.find("nine");
        wordLength = 4;
    }
    

    if(findIndex == -1){
        return {-1,-1};
    }
    
    return {findIndex,wordLength};
    
}



int solution(string s) {
    
    //find 명령어로 for문 통해서 영단어 찾기
    //찾은 영단어의 위치부터 갯수를 알아야함
    
    
    
    while(true){
        bool isFind = false;

        for(int i = 0 ; i <= 9; i++){
        vector<int> result = findNumber(i,s);
        
        if(result[0] != -1 && result[1] != -1){
            isFind = true;
            auto start = s.begin()+result[0];
            auto end = start+ result[1];
            s.replace(start,end,to_string(i));
            }
            
   
        cout << s << "\n";
        }
        if(isFind == false){
            break;
        }
        
    }
    
    
    
    
    
    
    

    unsigned long long answer = stoull(s);
    return answer;
}