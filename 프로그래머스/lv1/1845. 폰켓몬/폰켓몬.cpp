#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    
    int arr[200001]={0,};
    
    for(int i = 0 ; i < nums.size();i++){
        arr[nums[i]]++;
    }
    int kinds = 0;

    for(int i = 1 ; i <200001;i++){
        if(arr[i]>0){
            kinds++;
        }        
    }

    if(kinds > nums.size()/2){
        return nums.size()/2;
    }else{
        return kinds;
    }
    
}