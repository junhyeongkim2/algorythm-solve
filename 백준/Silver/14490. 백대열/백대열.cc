#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){

    if(!b) return a;
    return gcd(b,a%b);
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int GCD=0;
    int n,m;
    scanf("%d:%d",&n,&m);

    GCD = gcd(n,m);

    cout << n / GCD << ":" << m / GCD;





    return 0;
}