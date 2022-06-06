#include <map>
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int w;
    int n;

    map<string,int> cl ;
    cin >> w;

    for(int i = 0 ; i < w; i++){
        cin >> n;
        string s1,s2;
        for(int i1=0;i1<n;i1++) {
            cin >> s1 >> s2;
            if(cl.find(s2) == cl.end()){
                cl.insert({s2,1});
            }
            else{
                cl[s2]++;
            }
        }
        int ans=1;
        for(auto i2 : cl){
            //cout << i2.first << "\n";
            ans *= (i2.second+1);
        }
        ans-=1;
        cout << ans << "\n";
        cl.clear();
    }
    return 0 ;
}