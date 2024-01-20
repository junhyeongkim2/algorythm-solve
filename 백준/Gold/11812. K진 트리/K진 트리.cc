#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long int n;
int k, q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k >> q;
	long long int y, x;
	for (int i = 0; i < q; ++i) {
		cin >> y >> x;
		long long int count = 0;
		if (k == 1) {
			count = abs(y - x);
		}
		else {
			while (y != x) {
				if (y > x) {
					y = (y - 2) / k + 1;
				}
				else {
					x = (x - 2) / k + 1;
				}
				++count;
			}
		}
		cout << count << '\n';
	}
	return 0;
}