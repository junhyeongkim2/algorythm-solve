#include <bits/stdc++.h>

using namespace std;

int k;
deque<pair<int, int>> dq;

bool case1;
bool case2;
bool case3;
bool case4;


void caseCheck() {
    int oneCount = 0;
    int twoCount = 0;
    int threeCount = 0;
    int fourCount = 0;

    for (int i = 0; i < dq.size(); i++) {
        if (dq[i].first == 1) {
            oneCount++;
        }
        if (dq[i].first == 2) {
            twoCount++;
        }
        if (dq[i].first == 3) {
            threeCount++;
        }
        if (dq[i].first == 4) {
            fourCount++;
        }
    }

    if (threeCount == 2 && oneCount == 2) {
        case1 = true;
    }
    if (threeCount == 2 && twoCount == 2) {
        case2 = true;
    }
    if (fourCount == 2 && twoCount == 2) {
        case3 = true;
    }
    if (oneCount == 2 && fourCount == 2) {
        case4 = true;
    }


}


bool directionCheck() {

    if (dq[2].first == 3 && dq[3].first == 1 && dq[4].first == 3 && dq[5].first == 1 && case1) {
        return true;
    }
    if (dq[2].first == 2 && dq[3].first == 3 && dq[4].first == 2 && dq[5].first == 3 && case2) {
        return true;
    }
    if (dq[2].first == 4 && dq[3].first == 2 && dq[4].first == 4 && dq[5].first == 2 && case3) {
        return true;
    }
    if (dq[2].first == 1 && dq[3].first == 4 && dq[4].first == 1 && dq[5].first == 4 && case4) {
        return true;
    }

    return false;
}

void rotate() {

    while (!directionCheck()) {
        int frontFirst = dq.front().first;
        int frontSecond = dq.front().second;
        dq.pop_front();
        dq.push_back({frontFirst, frontSecond});
    }


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> k;


    for (int i = 0; i < 6; i++) {
        int direction, length;
        cin >> direction >> length;
        dq.push_back({direction, length});
    }

    caseCheck();
    rotate();


    int totalSquareSize = (dq[2].second + dq[4].second) * (dq[3].second + dq[5].second);
    int smallSquareSize = (dq[3].second * dq[4].second);

    int realSquareSize = totalSquareSize - smallSquareSize;

    int answer = realSquareSize * k;

    cout << answer << "\n";


}