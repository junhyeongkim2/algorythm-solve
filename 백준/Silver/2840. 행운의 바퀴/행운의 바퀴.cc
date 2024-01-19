#include <bits/stdc++.h>

using namespace std;

deque<char> dq;
map<char, int> m;

void spin() {

    dq.push_front(dq.back());
    dq.pop_back();

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n, k;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        dq.push_back('?');
    }

    bool check = false;

    for (int i = 0; i < k; i++) {
        int s;
        char c;
        cin >> s >> c;

        for (int i = 0; i < s; i++) {
            spin();
        }


        if (dq[0] == '?' && m[c] == 1) {
            check = true;
        }


        if (dq[0] == '?' || dq[0] == c) {
            m[c] = 1;
            dq[0] = c;

        } else {
            cout << "!";
            return 0;
        }

    }

    if (check == false) {

        for (int i = 0; i < dq.size(); i++) {
            cout << dq[i];
        }
    }else{
        cout << "!";
    }


}

