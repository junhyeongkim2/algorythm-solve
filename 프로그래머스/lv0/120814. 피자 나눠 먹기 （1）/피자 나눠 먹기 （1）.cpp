#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int a = n / 7;
    int b = n % 7;
    
    
    
    int answer = a;
    if(b!=0){
        answer += 1;
    }
    return answer;
}