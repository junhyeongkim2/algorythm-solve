#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    
    int sum = 0;
    for(auto x: numbers){
        sum += x;
    }
    
    
    
    
    
    double answer = double(sum) / numbers.size();
    return answer;
}