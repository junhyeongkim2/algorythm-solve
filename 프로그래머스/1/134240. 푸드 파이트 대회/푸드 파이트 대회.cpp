#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> foods;


void makePairFood(){    
    for(int i = 1 ; i < foods.size(); i++){
        if(foods[i] % 2 != 0){
            foods[i]--;
        }
    }    
}


string makeResult(){
    string result = "";
    
    string left = "";
    
    
    for(int i = 1 ; i < foods.size(); i++){
        for(int j = 0; j < foods[i]/2; j++){
            left+= to_string(i);            
        }
    }
    
    result+= left;
    result+= "0";
    reverse(left.begin(),left.end());
    result += left;
    
    return result;
}









string solution(vector<int> food) {
    
    
    foods = food;
    
    //1번 예시
    //0번은 항상 물
    //1번 음식 3개, 2번 음식 4개, 3번 음식 6개
    
    
    // 1개 있는 것 제외하기
    // 짝수 아닌 것 -1 하기
    
    //구해진 걸로 왼쪽 구하고 + "0" + reverse해서 더해주기
    
    makePairFood();
    
    for(int i = 0; i< foods.size(); i++){
        cout << foods[i] << " ";
    }
    cout << "\n";
    
    string result = makeResult();
    
    string answer = result;
    return answer;
}