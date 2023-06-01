#include <bits/stdc++.h>
using namespace std;


int N,K;
vector<string>ans;

bool cmp(string a, string b){
    if( a+b > b+a )
        return true;
    return false;
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> K >> N;
    string str = "";
    string tmp;

    //숫자 한번씩 모두 ans 벡터에 넣어주기
    //모든 숫자들 중에서 길이도 가장 길고 사전상으로 가장 앞서는 str을 저장을 해 놓음 
    for(int i=1; i<=K; i++){
        cin >> tmp;
        if(str.size()<tmp.size()||(str.size()==tmp.size()&&str<tmp)){
            str = tmp;
        }
        ans.push_back(tmp);
    }

    //한번씩 할당하고 나머지를 가장 큰녀석으로 모두 ans에 넣어줌
    for(int i=0; i<N-K; i++){
        ans.push_back(str);
    }
    
    //ans중에서 a+b > b+a 를통해서 가장 앞서는 녀석들 순으로 순서대로 나열함
    sort(ans.begin(),ans.end(),cmp);
    
    //정렬된 데이터값들을 출력을 해줌
    for(int i = 0 ;  i < ans.size();i++){
        cout << ans[i];
    }






    return 0;
}