#include <bits/stdc++.h>
using namespace std;

vector<pair<long long,long long>>v;
priority_queue<long long ,vector<long long> , greater<>>pq;

int N;

int main(){
    cin >> N;

    for (int i = 0; i <N ; ++i) {
        long long  a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    std::sort(v.begin(), v.end());

    pq.push(v[0].second);

    int m =0;
    for (int i = 1; i <N ; ++i) {
        //cout << pq.top()<<"\n";
        if(!pq.empty()&&(pq.top()<=v[i].first)){
            //cout << pq.top()<<"\n";
            pq.pop();
        }
        pq.push(v[i].second);
        int a = pq.size();
        m = max(m,a);
    }
    cout << m;












}
