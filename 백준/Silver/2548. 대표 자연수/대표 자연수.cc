#include <bits/stdc++.h>

using namespace std;

vector<int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        v.push_back(a);
    }

    int average = sum / v.size();
    long long int averageSum = 0;


    for (int i = 0; i < v.size(); i++) {
        averageSum += abs(average - v[i]);
    }

//    cout << averageSum << "\n";


    sort(v.begin(), v.end());

    int minSum = 987654321;
    int minValue = 0;

    vector<int> minValues;


    for (int i = 0; i < n; i++) {
        
        long long int tempSum = 0;

        for (int j = 0; j < n; j++) {
            tempSum += abs(v[i] - v[j]);
        }

        if (minSum > tempSum) {
            minSum = tempSum;
            minValue = v[i];
        }
    }
    cout << minValue;


}

