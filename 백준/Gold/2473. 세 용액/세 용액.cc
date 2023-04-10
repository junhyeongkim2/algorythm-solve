#include<bits/stdc++.h>

using namespace std;
const int MAX = 1e6+1;


int n;

vector<long long>graph;

int main() {

    cin >> n;

    for(int i = 0 ; i < n; i++){
        long long a;
        cin >> a;
        graph.push_back(a);
    }

    long long result[3];
    long long  res = 3000000001;


    sort(graph.begin(),graph.end());


    for(int i = 0 ; i < n-2; i ++){

        int left = i+1;
        int right = n-1;
        int center = i;


        while(left<right){

            long long temp = graph[left] + graph[right] + graph[center];


            if(abs(temp)<res){

                //cout << "passed"<<"\n";
                result[0] = graph[left];
                result[1] = graph[center];
                result[2] = graph[right];
                res = abs(temp);


//                cout << result[0] <<"\n";
//                cout << result[1] <<"\n";
//                cout << result[2] <<"\n";


            }

            if(temp<0){
                left++;
            }else{
                right--;
            }

        }

    }

    sort(result,result+3);

    cout << result[0] << " " << result[1] << " " << result[2] <<"\n";








	return 0;
}