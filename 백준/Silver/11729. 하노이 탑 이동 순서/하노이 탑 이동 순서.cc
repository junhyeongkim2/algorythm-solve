#include <stdio.h>
#include <cmath>

// n개의 판을 from 기둥에서 to 기둥으로 옮긴다
void solve(int n, int from, int to) {
	if (n == 0) return; // 남은 판 없으면 종료

	int remain = 6 - from - to; // 기둥(1,2,3) 합이 6이므로

	solve(n - 1, from, remain);
	printf("%d %d\n", from, to);
	solve(n - 1, remain, to);
}

int main() {
	int n;
	scanf("%d", &n);

	int k = pow(2, n) - 1; // 이동 횟수 : n 일때 2^n - 1

	printf("%d\n", k);
	solve(n, 1, 3);
	
	return 0;
}