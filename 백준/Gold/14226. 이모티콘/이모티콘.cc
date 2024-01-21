#include <bits/stdc++.h>
#define visit trash
using namespace std;


int s;
bool visit[9999][9999];

int bfs() {

    queue<pair<pair<int, int>, int>> q;
    q.push({{1, 0}, 0});


    while (!q.empty()) {

        int nowScreenEmojiCount = q.front().first.first;
        int nowClipboardEmojiCount = q.front().first.second;
        int nowTime = q.front().second;
        q.pop();

        if (visit[nowScreenEmojiCount][nowClipboardEmojiCount] == true) {
            continue;
        }

        visit[nowScreenEmojiCount][nowClipboardEmojiCount] = true;

//        cout << nowScreenEmojiCount << " " << nowClipboardEmojiCount << " " << nowTime << "\n";

        if (nowScreenEmojiCount == s) {
            return nowTime;
        }

        int newScreenEmojiCount = 0;
        int newClipboardEmojiCount = 0;

        for (int i = 0; i < 3; i++) {

            if (i == 0 && nowScreenEmojiCount > 0) {
                newScreenEmojiCount = nowScreenEmojiCount;
                newClipboardEmojiCount = nowScreenEmojiCount;
            }

            if (i == 1 && nowClipboardEmojiCount > 0) {
                newScreenEmojiCount = nowScreenEmojiCount + nowClipboardEmojiCount;
                newClipboardEmojiCount = nowClipboardEmojiCount;
            }

            if (i == 2 && nowScreenEmojiCount > 0) {
                newScreenEmojiCount = nowScreenEmojiCount - 1;
                newClipboardEmojiCount = nowClipboardEmojiCount;
            }

            q.push({{newScreenEmojiCount, newClipboardEmojiCount}, nowTime + 1});
        }


    }
    return 0;

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> s;

    cout << bfs();


}

