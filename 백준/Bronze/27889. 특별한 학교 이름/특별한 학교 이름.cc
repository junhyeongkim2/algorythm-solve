#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int>a, pair<int,int> b){

    if ( a. second < b.second){
        return true;
    }

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;


    if( s== "NLCS"){
        cout << "North London Collegiate School" << "\n";
    }else if ( s == "BHA"){
        cout << "Branksome Hall Asia" << "\n";
    }else if ( s == "KIS"){
        cout << "Korea International School" << "\n";
    }else if ( s == "SJA"){
        cout << "St. Johnsbury Academy" << "\n";
    }




}

