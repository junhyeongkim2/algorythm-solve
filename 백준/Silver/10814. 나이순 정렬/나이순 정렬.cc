#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main(){
    int N;
    cin >> N;
    vector<tuple<int,int,string>> p;

    for(int i =0 ; i< N; i++){
        int age;
        string name;
        cin >> age;
        cin >> name;
        p.push_back({age,i,name});
    }
    sort(p.begin(),p.end());


    for(auto i : p ){
        cout << get<0>(i) << " " << get<2>(i)<<'\n';


    }



















}