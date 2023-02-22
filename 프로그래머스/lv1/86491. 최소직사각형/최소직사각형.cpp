#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    
    
    int vsize = sizes.size();
    
    int leftm = 0;
    int rightm = 0;
    
    for(int i = 0 ; i < vsize; i++){
        if (sizes[i][0]>sizes[i][1]){
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        
        leftm = max(leftm,sizes[i][0]);
        rightm = max(rightm,sizes[i][1]);   
    }
    
    int answer = leftm * rightm;
    return answer;
}