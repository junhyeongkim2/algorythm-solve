#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
         
        while(n>0){
            
            int value = n % 10;
            n/=10;
            answer.push_back(value);
                    
        }
    
    
    return answer;
}