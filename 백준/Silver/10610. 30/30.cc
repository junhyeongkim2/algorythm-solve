#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{


    string N;
    cin >> N;
    std::sort(N.begin(), N.end(),greater<>());


    long long int  sum=0;

    if(N[N.size()-1] != '0'){
        cout << "-1";
    }else{
        for(int i =0 ; i < N.size();i++){
            sum += N[i]-'0';
        }
        if (sum%3 == 0)
            cout << N;
        else
            cout << -1;

    }













}






