#include <bits/stdc++.h>

using namespace std;

int n;
int m;

vector<pair<string, int>> v;


string judgeZero(char c) {
    if (c == '0') {
        return "zero";
    }
    return "";
}

string judgeOne(char c) {
    if (c == '1') {
        return "one";
    }
    return "";
}

string judgeTwo(char c) {
    if (c == '2') {
        return "two";
    }
    return "";
}

string judgeThree(char c) {
    if (c == '3') {
        return "three";
    }
    return "";
}

string judgeFour(char c) {
    if (c == '4') {
        return "four";
    }
    return "";
}

string judgeFive(char c) {
    if (c == '5') {
        return "five";
    }
    return "";
}

string judgeSix(char c) {
    if (c == '6') {
        return "six";
    }
    return "";
}

string judgeSeven(char c) {
    if (c == '7') {
        return "seven";
    }
    return "";
}

string judgeEight(char c) {
    if (c == '8') {
        return "eight";
    }
    return "";
}

string judgeNine(char c) {
    if (c == '9') {
        return "nine";
    }
    return "";
}


string judgeNumber(char c) {
    string s = "";
    s += judgeZero(c);
    s += judgeOne(c);
    s += judgeTwo(c);
    s += judgeThree(c);
    s += judgeFour(c);
    s += judgeFive(c);
    s += judgeSix(c);
    s += judgeSeven(c);
    s += judgeEight(c);
    s += judgeNine(c);
    return s;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = n; i <= m; i++) {

        if (i < 10) {
            v.push_back({judgeNumber(i+'0'),i});
        }

        if (i >= 10) {
            string iString = to_string(i);
            string s;

            s+= judgeNumber(iString[0]);
            s += " ";
            s+= judgeNumber(iString[1]);

            v.push_back({s, i});
        }


    }


    sort(v.begin(), v.end());

    int cnt = 0;
    for (auto x: v) {
        cout << x.second << " ";
        cnt++;
        if (cnt >= 10) {
            cout << "\n";
            cnt = 0;
        }
    }


}