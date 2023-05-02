#include <bits/stdc++.h>
using namespace std;

int main(){

    int b,c,d;
    cin >> b>>c>>d;

    vector<int>burger;
    vector<int>side;
    vector<int>drink;

    int allvalue=0;

    for(int i = 0 ; i < b ; i ++){
        int a;
        cin >> a;
        burger.push_back(a);
        allvalue+=a;

    }
    for(int i = 0 ; i < c ; i ++){
        int a;
        cin >> a;
        side.push_back(a);
        allvalue+=a;


    }
    for(int i = 0 ; i < d ; i ++){
        int a;
        cin >> a;
        drink.push_back(a);
        allvalue+=a;

    }


    sort(burger.begin(),burger.end(),greater<>());
    sort(side.begin(),side.end(),greater<>());
    sort(drink.begin(),drink.end(),greater<>());

    int minvalue = min(burger.size(),min(side.size(),drink.size()));
    int maxvalue = max(burger.size(),max(side.size(),drink.size()));
    int sum =0;

    for(int i = 0 ; i < minvalue; i++){
        int discount = (burger[i]+side[i]+drink[i]) * 0.9;
        sum += discount;
        //cout << discount <<"\n";
    }

    for(int i = minvalue; i < burger.size(); i++){
        sum += burger[i];
    }

    for(int i = minvalue; i < side.size(); i++ ){
        sum += side[i];
    }

    for(int i = minvalue; i < drink.size(); i++){
        sum += drink[i];
    }



    //cout << "\n";

    cout << allvalue <<"\n";
    cout << sum <<"\n";











}