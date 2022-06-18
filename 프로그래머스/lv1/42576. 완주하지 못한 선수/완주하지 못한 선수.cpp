#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    int i=0;
    for( ; i < completion.size();i++){
        if(participant[i]!=completion[i]){
            answer= participant[i];
            break;
        }
    }
    return participant[i];
}