#include <bits/stdc++.h>

using namespace std;


int w, h;
int n;
vector<int> tempWeights;
vector<int> tempHeights;

vector<int> weights;
vector<int> heights;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> w >> h;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int direction, number;

        cin >> direction >> number;

        if (direction == 0) {
            tempHeights.push_back(number);
        }
        if (direction == 1) {
            tempWeights.push_back(number);
        }
    }
    tempHeights.push_back(0);
    tempHeights.push_back(h);
    tempWeights.push_back(0);
    tempWeights.push_back(w);

    sort(tempHeights.begin(), tempHeights.end());
    sort(tempWeights.begin(), tempWeights.end());

    for (int i = 1; i < tempHeights.size(); i++) {
        heights.push_back(tempHeights[i] - tempHeights[i - 1]);
    }
    for (int i = 1; i < tempWeights.size(); i++) {
        weights.push_back(tempWeights[i] - tempWeights[i - 1]);
    }

    std::sort(weights.begin(), weights.end());
    std::sort(heights.begin(), heights.end());

    cout << weights[weights.size()-1] * heights[heights.size()-1];


}