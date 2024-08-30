#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    
    
    vector<int> answer;
    
    for(int i = 0 ; i < prices.size(); i++){
        int currentCount = 0;
        for(int j = i+1 ; j < prices.size(); j++){
            if(prices[i] <= prices[j] ){
                currentCount++;
            }else{
                currentCount++;
                break;
            }
            
        }
        answer.push_back(currentCount);
    }
    
    
    return answer;
}