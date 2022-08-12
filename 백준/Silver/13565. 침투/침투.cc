#include <iostream>


using namespace std;


int M , N;
string s;

int graph[1001][1001];
int visited[1001][1001];

int dx[]={1,0,0,-1,};
int dy[]={0,-1,1,0,};

bool check=false;

void reset(){
    for(int i = 0 ; i <1001;i++){
        for(int i1=0;i1<1001;i1++){
            visited[i][i1]=0;
        }
    }

}
void dfs(int sx,int sy){

    if(check==true){
        return;
    }
    if(sx == M-1){
        //cout << "arrived"<<"\n";
        check = true;
    }
    visited[sx][sy] = 1;
    //cout << sx << " " << sy <<"\n";
    for(int i = 0 ; i <4;i++){
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if(nx<M&&ny<N&&nx>=0&&ny>=0&&graph[nx][ny]==0&&visited[nx][ny]==0){
            dfs(nx,ny);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> M >> N;
    for(int i = 0 ; i<M;i++){
        cin >> s;
        for(int i1=0;i1<s.length();i1++){
            graph[i][i1] = s[i1] -'0';
            //cout <<graph[i][i1] <<"\n";
        }
    }
    for(int i = 0 ; i < N;i++){
        if(graph[0][i]==0&&visited[0][i]==0){
            dfs(0,i);
            reset();
            //cout << "N : "<< i <<"\n";
        }
    }

    if(check==true){
        cout <<"YES";
    }else{
        cout<<"NO";
    }

}