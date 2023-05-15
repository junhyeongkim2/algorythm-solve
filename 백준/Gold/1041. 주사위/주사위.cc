#include <bits/stdc++.h>
using namespace std;

int n,m;


vector<int>square;
vector<int>temp;
vector<int>temp2;

int main(){


    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n;
    cin >> n;
    for(int i = 0 ; i < 6 ; i++){
        int a;
        cin >> a;
        square.push_back(a);
        //cout << a <<"\n";
    }

    if(n==1){
        sort(square.begin(),square.end());
        long long int answer=0;
        for(int i = 0 ; i < square.size()-1;i++){
            answer+=square[i];
        }
        cout << answer <<"\n";
    }else{
        temp = square;
        long long int AF = min(square[0],square[5]);
        long long int DC = min(square[3],square[2]);
        long long int EB = min(square[1],square[4]);

        temp2.push_back(AF);
        temp2.push_back(DC);
        temp2.push_back(EB);

        sort(temp.begin(),temp.end());
        sort(temp2.begin(),temp2.end());

        long long int min1=temp[0];
        long long int min2=temp2[0]+temp2[1];
        long long int min3= AF+DC+EB;

        long long int answer =0;
        //cout << "test" <<"\n";

        //cout << min1 << " " << min2 << " " << min3 << "\n";


        answer += min3 * 4;
        //cout << answer << "\n";
        answer += ( (4 * (n-2)) + (4 *(n-1)) ) * min2;
        //cout << answer << "\n";
        answer += ((4 * (n-2)*(n-1)) + pow((n-2),2)) * min1;
        //cout << answer << "\n";


        cout << answer << "\n";


    }
















}