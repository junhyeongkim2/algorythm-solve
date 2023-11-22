#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    map<char,int> surveyMap;
    string answer = "";

    for(int i = 0 ; i < survey.size(); i++){
        
        if ( choices[i] == 1) {
            surveyMap[survey[i][0]] += 3;
        }
        if ( choices[i] == 2) {
            surveyMap[survey[i][0]] += 2;
        }
        if ( choices[i] == 3) {
            surveyMap[survey[i][0]] += 1;
        }
        if ( choices[i] == 4) {

        }
        if ( choices[i] == 5) {
            surveyMap[survey[i][1]] += 1;
        }
        if ( choices[i] == 6) {
            surveyMap[survey[i][1]] += 2;
        }
        if ( choices[i] == 7) {
            surveyMap[survey[i][1]] += 3;
        }
        
    }
    
    answer += surveyMap['R'] >= surveyMap['T'] ? "R":"T";
    answer += surveyMap['C'] >= surveyMap['F'] ? "C":"F";
    answer += surveyMap['J'] >= surveyMap['M'] ? "J":"M";
    answer += surveyMap['A'] >= surveyMap['N'] ? "A":"N";
     
    
    
    
    
    return answer;
    
    
}