#include <bits/stdc++.h>

using namespace std;

int n, m;

struct Character {
    string type;
    int power;
};
vector<Character> v;


bool comp(Character a, Character b) {
    return a.power < b.power;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string type;
        int power;

        cin >> type >> power;

        v.push_back({type, power});
    }


    for (int i = 0; i < m; i++) {
        int power;
        cin >> power;

        int low = 0;
        int high = n - 1;
        int middle = 0;

        while (low <= high) {
            middle = (low + high) / 2;
            if (power <= v[middle].power) {
                high = middle - 1;
            } else {
                low = middle + 1;
            }
        }

        if (power > v[middle].power) {
//            cout << middle + 1 << "\n";
            cout << v[middle + 1].type << "\n";
        } else {
//            cout << middle << "\n";
            cout << v[middle].type << "\n";
        }


    }


}