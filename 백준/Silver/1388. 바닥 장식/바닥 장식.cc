#include <iostream>
#include <algorithm>
using namespace std;


int dx1[]={0,0};
int dy1[]={1,-1,};

int dx2[]={1,-1};
int dy2[]={0,0};


int n,m;
string s;
int graph[51][51];
int visited[51][51];


void dfs1(int sx,int sy){
    //cout << sx <<" "<< sy<<"\n";

    visited[sx][sy] = 1;
            int nx = sx+dx1[0];
            int ny = sy+dy1[0];
            if(visited[nx][ny]==0&&graph[nx][ny]==1&&nx>=0&&ny>=0&&nx<n&&ny<m){
                dfs1(nx,ny);

        }
}
void dfs2(int sx,int sy){
    //cout << sx <<" "<< sy<<"\n";

    visited[sx][sy] = 1;

            int nx = sx+dx2[0];
            int ny = sy+dy2[0];
            if(visited[nx][ny]==0&&graph[nx][ny]==2&&nx>=0&&ny>=0&&nx<n&&ny<m){
                dfs2(nx,ny);
            }


}


int main(){
    cin >> n >> m;

    for(int i = 0 ; i < n;i++){
        cin >> s;
        for(int i1=0;i1<m;i1++){
            if(s[i1]=='-'){
                graph[i][i1]=1;
            }else{
                graph[i][i1]=2;
            }
            //cout << graph[i][i1];
        }
        //cout <<"\n";
    }

    int c1=0;
    for(int i =0; i<n;i++){
        for(int i1=0;i1<m;i1++){
            if(visited[i][i1]==0&&graph[i][i1]==1){
                dfs1(i,i1);
                c1++;
                //cout << i << " "<< i1 <<"\n";
            }else if(visited[i][i1]==0&&graph[i][i1]==2){
                dfs2(i,i1);
                c1++;
                //cout << i << " "<< i1 <<"\n";
            }
        }
    }
    cout << c1<<"\n";


}