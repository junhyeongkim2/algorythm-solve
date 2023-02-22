#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    
    sort(citations.begin(), citations.end());
    
    int index = 0;
    for(int i = 0 ; i < citations[citations.size()-1]; i++ ){
        int cnt = 0;
        int cnt2 = 0;
        for(int j = 0 ; j < citations.size(); j++){
            if(citations[j] >= i){
                cnt++;
            }else{
                cnt2++;
            }
        }
        
        cout << i << " " << cnt << " " << cnt2 << "\n";
        
        if(i <= cnt && cnt2 < i ){
            index = max(i,index);
        }

    }
    
    cout << index << "\n";
    
    return index;
    
    
    
}





