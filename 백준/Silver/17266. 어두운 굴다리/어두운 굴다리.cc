#include <iostream>
#include <vector>

using namespace std;


int main() {

    int n=0;
    int m=0;
    vector<int>v;
    cin >> n;
    cin >> m;
    v.push_back(0);
    for(int i = 0 ; i < m ; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    v.push_back(n);

    int max=0;
    for(int i = 1; i < v.size(); i++){

        int temp = 0;

        if(i==1){
            temp = v[i]-v[i-1];
        }else if (i>1&&i<v.size()-1){
            if((v[i]-v[i-1])%2==0){
                temp = (v[i]-v[i-1])/2;
            }else{
                temp = ((v[i]-v[i-1])/2) +1;
            }
        }else if(i==v.size()-1){
            temp = v[i]-v[i-1];
        }


        if(temp > max  ){
            max = temp;
        }
    }

    cout << max << "\n";








    return 0;
}