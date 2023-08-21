#include <bits/stdc++.h>
using namespace std;


int tree[100000];
int tree_distance[100000];


int euclidean(int a, int b){
    int r = a%b;
    if ( r == 0 )
        return b;
    else
        return euclidean(b,r);
}


int main(void){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    int gcd = 0;
    int count = 0;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> tree[i];
    }

    sort(tree,tree+N);

    for(int i = 0 ; i < N - 1 ; i++){
        tree_distance[i] = tree[i+1] - tree[i];
    }

    gcd = tree_distance[0];

    for(int i = 1 ; i < N - 1; i++){
        gcd = euclidean(gcd,tree_distance[i]);
    }


    for(int i = 0 ; i < N - 1; i++){
        count+= (tree_distance[i]/gcd) - 1;
    }
    cout << count ;








    return 0;
}