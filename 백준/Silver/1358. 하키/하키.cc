#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;

double W, H, X, Y, P;

bool Square(double x, double y) { // 사각형 W * H 안에 들어오는지
    if (x >= X && x <= X + W && y >= Y && y <= Y + H) return true;
    return false;
}

double Dist(double a1, double b1, double a2, double b2) { // 두점 사이 거리
    return sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
}

bool Circle(double x, double y) { // 사각형 끝 두 반원 안에 들어오는지
    // 중심 (X, Y+H/2), 반지름 Y/2 원에 (x,y)가 들어오는지
    if (Dist(X, Y + H / 2, x, y) <= H / 2) return true;
    // 중심 (X+W, Y+H/2), 반지름 Y/2 원에 (x,y)가 들어오는지
    if (Dist(X + W, Y + H / 2, x, y) <= H / 2) return true;
    return false;
}

int main() {ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

cin >> W >> H >> X >> Y >> P;
int ans = 0;
for (int i = 0; i < P; ++i) {
    double x, y;
    cin >> x >> y;
    if (Square(x, y)) ans++;
    else if (Circle(x, y)) ans++;
}
cout << ans << '\n';

return 0;
}