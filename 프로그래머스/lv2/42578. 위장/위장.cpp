#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {

    map<string,int> m1;
    int count=0;

    for(int i = 0 ; i < clothes.size();i++){
        m1[clothes[i][1]]++;
        count++;
        //cout << clothes[i][1]<<"\n";
    }


        int ans=1;

        for(auto i : m1){
            ans *=(i.second+1);
        }
    
    int answer = ans-1;
    return answer;
}
