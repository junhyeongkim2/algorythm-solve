#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<pair<string, int>> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = n; i <= m; i++) {

        if (i < 10) {

            if (i == 1) {
                v.push_back({"one", i});
            }

            if (i == 2) {
                v.push_back({"two", i});
            }
            if (i == 3) {
                v.push_back({"three", i});
            }
            if (i == 4) {
                v.push_back({"four", i});
            }
            if (i == 5) {
                v.push_back({"five", i});
            }
            if (i == 6) {
                v.push_back({"six", i});
            }
            if (i == 7) {
                v.push_back({"seven", i});
            }
            if (i == 8) {
                v.push_back({"eight", i});
            }
            if (i == 9) {
                v.push_back({"nine", i});
            }
        }

        if (i >= 10) {
            string iString = to_string(i);
            string s;

            if (iString[0] == '1') {
                s += "one";
            }

            if (iString[0] == '2') {
                s += "two";
            }

            if (iString[0] == '3') {
                s += "three";
            }

            if (iString[0] == '4') {
                s += "four";
            }

            if (iString[0] == '5') {
                s += "five";
            }

            if (iString[0] == '6') {
                s += "six";
            }

            if (iString[0] == '7') {
                s += "seven";
            }
            if (iString[0] == '8') {
                s += "eight";
            }
            if (iString[0] == '9') {
                s += "nine";
            }

            s += " ";

            if (iString[1] == '0') {
                s += "zero";
            }

            if (iString[1] == '1') {
                s += "one";
            }

            if (iString[1] == '2') {
                s += "two";
            }

            if (iString[1] == '3') {
                s += "three";
            }

            if (iString[1] == '4') {
                s += "four";
            }

            if (iString[1] == '5') {
                s += "five";
            }

            if (iString[1] == '6') {
                s += "six";
            }

            if (iString[1] == '7') {
                s += "seven";
            }
            if (iString[1] == '8') {
                s += "eight";
            }
            if (iString[1] == '9') {
                s += "nine";
            }
            v.push_back({s, i});
        }


    }


    sort(v.begin(),v.end());

    int cnt = 0;
    for(auto x : v){
        cout << x.second << " ";
        cnt++;
        if(cnt>=10){
            cout << "\n";
            cnt=0;
        }
    }





}