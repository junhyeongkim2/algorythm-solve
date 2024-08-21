#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> times) {
    
    unsigned long long answer = 1000000001;
    
    
    unsigned long long start = 0;
    unsigned long long end = n * (unsigned long long) times.back();
    
    sort(times.begin(),times.end());
    
    int searchRange = 0;

    
    
    while(start<=end){
        unsigned long long mid = (start+end) / 2;
        unsigned long long sum = 0;
        
        
        for(int i = 0 ; i < times.size(); i++){
            sum += mid / (unsigned long long) times[i]; 
        }
        cout << start <<  " " << mid << " " << end << " " << sum << "\n";

    
        if(sum < n ){
            start = mid+1;
        }else{
            end = mid-1;
            answer = mid;

        }
        
    }
    
    
    
    return answer;
}