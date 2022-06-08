#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<pair<int, int>>a;

    int begin,end;
    for (int i = 0; i < n; i++) {
        cin >> begin >> end;
        a.push_back(make_pair(end, begin));

    }
    sort(a.begin(), a.end());

    int savetime = a[0].first ;
    int answer = 1 ;

    for(int i = 1 ; i < n ; i ++){
        if(savetime <= a[i].second){
            savetime = a[i].first;
            answer++;
        }
    }

    cout << answer;





}
