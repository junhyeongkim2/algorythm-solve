#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    map<string, int> poketStr;
    map<int, string> poketNum;
    int N, M, num=1;
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        poketStr.insert({str,i+1});
        poketNum.insert({i+1,str});
    }

    for (int i = 0; i < M; i++)
    {
        char question[21];
        cin >> question;
        if (isdigit(question[0])!=0)
        {
            int qNum = atoi(question);
            cout << poketNum[qNum] << '\n';
        }
        else
        {
            cout << poketStr[question] << '\n';
        }
    }
    return 0;
}