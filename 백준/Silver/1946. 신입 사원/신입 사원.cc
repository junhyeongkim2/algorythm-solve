#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main()
{
    long long int n;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<pair<long long int ,long long int>>v1;

    cin >>n;

    long long int count = 0;
    for(int i = 0 ; i < n ; i ++){
        long long int n2=0;
        cin >> n2;
        for(int i1 = 0 ; i1 <n2; i1++ ){
            long long int a1,a2;
            cin >> a1 >> a2;
            v1.push_back(make_pair(a1,a2));
        }
        std::sort(v1.begin(), v1.end());

        int max = 0 ;

        max = v1[0].second;


        for(int i2=0; i2<n2;i2++){
            if(v1[i2].second<=max){
                count ++;
                max = v1[i2].second;
            }

        }

        cout <<count << "\n";
        count =0;
        v1.erase(v1.begin(),v1.end());




    }









}






