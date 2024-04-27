#include <bits/stdc++.h>

using namespace std;

int n, q;
int musicalScores[101];

int findCurrentMusicalScore(int question) {
    for (int i = 0; i < n; i++) {
        if (question <= musicalScores[i] - 1) {
            return i + 1;
        }
    }
    return n;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin >> n >> q;

    cin >> musicalScores[0];


    for (int i = 1; i < n; i++) {
        int musicalScore;
        cin >> musicalScore;
        musicalScores[i] = musicalScore + musicalScores[i - 1];
    }


    for (int i = 0; i < q; i++) {
        int question;
        cin >> question;
        cout << findCurrentMusicalScore(question) << "\n";
    }

}