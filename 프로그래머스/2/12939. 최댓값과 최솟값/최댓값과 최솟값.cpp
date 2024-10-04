#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int>v;

string solution(string s) {
    
    std::istringstream iss(s);
    std::vector<int> nums;

    int num;
    while (iss >> num) {
        nums.push_back(num);
    }

    int min_val = *std::min_element(nums.begin(), nums.end());
    int max_val = *std::max_element(nums.begin(), nums.end());

    return std::to_string(min_val) + " " + std::to_string(max_val);
}