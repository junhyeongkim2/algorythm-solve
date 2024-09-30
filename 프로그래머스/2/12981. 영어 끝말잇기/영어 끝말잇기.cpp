#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    
    //나온 단어 카운트 맵 한개
    //몇번 말했는지 카운트 맵 한개
    //몇번째 사람인지 모듈러 연산
    
    //for문으로 words 하나씩 순회한다.
    //나온 단어 이미 true이면 멈춘다
    //단어 첫글자가 다르면 멈춘다
    
    //멈춘 상황에서 몇번째 사람인지, 몇번 말했는지 카운트 출력한다
    
    map<string,int> wordCount;
    map<int,int> talks;
    vector<int> answer;

    wordCount[words[0]]++;
    talks[1]++;
    
    for(int i = 1 ; i < words.size(); i++){
        
        wordCount[words[i]]++;
        talks[(i%n)+1]++;
        
        if(wordCount[words[i]] >= 2){
            answer.push_back((i%n)+1);
            answer.push_back(talks[(i%n)+1]);
            cout << "over" << "\n";
            break;
        }
        if(words[i].substr(0,1) != words[i-1].substr(words[i-1].length()-1, words[i-1].length())){
            answer.push_back((i%n)+1);
            answer.push_back(talks[(i%n)+1]);
            cout << i << "\n";
            cout << words[i].substr(0,1) << " " << words[i-1].substr(words[i-1].length()-1, words[i-1].length()) << "\n";
            cout << "different" << "\n";
            break;
        }
    }
        
    
    
    if(answer.size()==0){
        answer.push_back(0);
        answer.push_back(0);
    }
    

    return answer;
}