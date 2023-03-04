#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = (12000 * n) + (2000 * k);
    
    int service = n / 10;
    
    answer -= service * 2000;
    
    
    
    return answer;
}