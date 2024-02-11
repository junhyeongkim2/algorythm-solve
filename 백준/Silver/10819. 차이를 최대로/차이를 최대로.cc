#include <bits/stdc++.h>
#include <queue>
#include <vector>

using namespace std;

int n;
vector<int> v;
vector<int> temp;


int main() {
    vector<int> arr;
    int N;
    int element;
    int sum;
    int result = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> element;
        arr.push_back(element);
    }

    // 원소를 오름차순 정렬
    sort(arr.begin(), arr.end());

    // 모든 경우의 수를 다 탐색
    while (next_permutation(arr.begin(), arr.end())) {
        sum = 0;
        

        for (int i = 0; i < arr.size() - 1; i++) {
            sum += abs(arr[i] - arr[i + 1]);
        }
        // 기존 result 값과 비교하여 더 큰값을 채택
        result = max(result, sum);
    }

    cout << result;

    return 0;
}

