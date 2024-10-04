#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int> > land)
{
    int n = land.size();
    
    // 각 행에 대해 최대값을 갱신해나간다.
    for (int i = 1; i < n; i++) {
        land[i][0] += max({land[i-1][1], land[i-1][2], land[i-1][3]});
        land[i][1] += max({land[i-1][0], land[i-1][2], land[i-1][3]});
        land[i][2] += max({land[i-1][0], land[i-1][1], land[i-1][3]});
        land[i][3] += max({land[i-1][0], land[i-1][1], land[i-1][2]});
    }
    
    // 마지막 행에서 가장 큰 값을 찾는다.
    return *max_element(land[n-1].begin(), land[n-1].end());
}