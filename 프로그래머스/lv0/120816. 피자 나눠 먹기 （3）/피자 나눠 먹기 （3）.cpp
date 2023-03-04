#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    
    int result = 0 ;
    
    result += n / slice;
    
    if(n % slice){
        result++;
    }
    
    
    
    int answer = result;
    return answer;
}