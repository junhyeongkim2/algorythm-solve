#include <bits/stdc++.h>

using namespace std;

int n;

bool arr[10001] = {false,};

vector<int> primes;

void prime() {


    for (int i = 2; i < 10001; i++) {
        for (int j = i * i; j < 10001; j += i) {
            arr[j] = true;
//            cout << j << "\n";
        }
    }

    for (int i = 2; i < 10001; i++) {
        if (arr[i] == false) {
//            cout << i << "\n";
            primes.push_back(i);
        }
    }


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    prime();


    for (int i = 0; i < primes.size(); i ++) {


        if (primes[i] * primes[i + 1] > n) {
            cout << primes[i] * primes[i + 1];
            return 0;
        }

    }


    return 0;
}

