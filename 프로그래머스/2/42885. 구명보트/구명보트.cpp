#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int visited[50001];

int solution(vector<int> people, int limit) {
    
  std::sort(people.begin(), people.end());  // 사람의 무게를 오름차순으로 정렬합니다.

    int i = 0;  // 가장 가벼운 사람을 가리키는 포인터
    int j = people.size() - 1;  // 가장 무거운 사람을 가리키는 포인터
    int boatCount = 0;

    
    
    //50 50 70 80
    
    // 50 80, i = 0, j = 2
    // 50 70 i = 0, j = 1
    // 50 50 i = 1, j = 0

    


    
    
    while (i <= j) {
        if (people[i] + people[j] <= limit) {
            // 가장 가벼운 사람과 가장 무거운 사람을 같은 보트에 태웁니다.
            i++;
        }
        // 가장 무거운 사람을 태웁니다 (둘 다 태우지 못했으면 이 조건만 실행됩니다).
        j--;
        boatCount++;  // 보트 수를 증가시킵니다.
    }

    return boatCount;
    
}