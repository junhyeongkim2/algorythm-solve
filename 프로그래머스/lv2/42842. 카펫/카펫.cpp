#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int size = brown + yellow;
    
    for(unsigned height = 3 ; height < size; height ++ ){
        
        if(size%height == 0 ){
            int width = size / height ;
            int widthy = width - 2;
            int heighty = height - 2;
            if(widthy * heighty == yellow){
                answer.push_back(width);
                answer.push_back(height);
                break;
            }
        }
    }
    
    
    return answer;
}




