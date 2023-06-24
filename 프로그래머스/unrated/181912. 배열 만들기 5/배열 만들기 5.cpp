#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;

    for(int i = 0 ; i < intStrs.size();i++){
        
        string ss="";
        
        for(int j = s ; j < s+l; j++){
            ss+= intStrs[i][j];
        }
        
        if ( stoi(ss) > k ){
            answer.push_back(stoi(ss));
        }
        
    }
    
    return answer;
}