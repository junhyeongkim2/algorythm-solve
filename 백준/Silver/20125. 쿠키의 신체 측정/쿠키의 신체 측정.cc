#include <bits/stdc++.h>

using namespace std;

int n;
char graph[1001][1001];

int headY = 0;
int headX = 0;

int heartY = 0;
int heartX = 0;

int waistY = 0;
int waistX = 0;


void findHead() {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (graph[i][j] == '*') {
                headY = i;
                headX = j;
                return;
            }
        }
    }
}

int findLeftArm() {

    int armCnt = 0;

    for (int i = heartX - 1; i >= 0; i--) {
        if (graph[heartY][i] == '*') {
            armCnt++;
        }
        if (graph[heartY][i] != '*') {
            return armCnt;
        }
    }
    return armCnt;
}

int findRightArm() {


    int armCnt = 0;

    for (int i = heartX + 1; i < n; i++) {
        if (graph[heartY][i] == '*') {
            armCnt++;
        }
        if (graph[heartY][i] != '*') {
            return armCnt;
        }
    }
    return armCnt;

}

int findWaist() {


    int waistCnt = 0;

    for (int i = heartY + 1; i < n; i++) {
        if (graph[i][heartX] == '*') {
            waistCnt++;

            waistY = i;
            waistX = heartX;
        }
        if (graph[i][heartX] != '*') {
            return waistCnt;
        }
    }
    return waistCnt;


}


int findLeftLeg() {

    int legY = waistY + 1;
    int legX = waistX - 1;
    int legCnt = 0;

    for (int i = legY; i < n; i++) {

        if (graph[i][legX] == '*') {
            legCnt++;
        }
        if (graph[i][legX] != '*') {
            return legCnt;
        }
    }
    return legCnt;
}

int findRightLeg() {

    int legY = waistY + 1;
    int legX = waistX + 1;
    int legCnt = 0;

    for (int i = legY; i < n; i++) {

        if (graph[i][legX] == '*') {
            legCnt++;
        }
        if (graph[i][legX] != '*') {
            return legCnt;
        }
    }
    return legCnt;

}

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    findHead();
    heartY = headY + 1;
    heartX = headX;
    int leftArm = findLeftArm();
    int rightArm = findRightArm();
    int waist = findWaist();
    int leftLeg = findLeftLeg();
    int rightLeg = findRightLeg();

    cout << heartY+1 << " " << heartX+1 << "\n";
    cout << leftArm << " " << rightArm << " " << waist << " " << leftLeg << " " << rightLeg << "\n";


}





