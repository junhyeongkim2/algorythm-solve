#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


//1번째 할일 : 정렬하기
//2번째 할일 : 중복된 것 빼고 하나씩 출력하기

int main(){
    int N;
    cin >> N;

    vector<pair<int,string>> p ;


    for(int i= 0;i<N;i++){
        string word;
        cin >> word;
        p.push_back({word.length(),word});
    }

    sort(p.begin(),p.end());
    p.erase(unique(p.begin(),p.end()),p.end());
    for(auto i : p){
        cout<<i.second<<endl;
    }











}