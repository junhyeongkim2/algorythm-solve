#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    int a=0;
    int b=0;
    for(int i = 0 ; i < num_list.size(); i++){
        
        if(num_list[i] % 2 ==0){
            a++;
        }else if (num_list[i]%2==1){
            b++;
        }
        
    }
    
    
    vector<int> answer;
    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}