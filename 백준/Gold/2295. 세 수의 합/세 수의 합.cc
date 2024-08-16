#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[1234] = {0};
map<ll,int> m;


int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			m[arr[i]+arr[j]] = 1;
		}
	}
	
	ll ans = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			if(m.find(arr[i]-arr[j]) != m.end()){
				ans = max(ans, arr[i]);
			}
		}
	}
	cout << ans;
	return 0;
}