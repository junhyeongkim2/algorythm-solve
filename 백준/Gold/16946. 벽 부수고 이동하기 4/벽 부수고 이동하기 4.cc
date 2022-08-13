#include <iostream>
#include <set>
#include <vector>

using namespace std;

int graph[1001][1001];
int idx[1001][1001];
int visited[1001][1001];
int answer[1001][1001];
int zeroindex=0;
int cnt=0;

vector<int>v1;

int N, M;

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};


void dfs(int sx,int sy,int zeroidex){
    visited[sx][sy] = 1;
    cnt++;
    idx[sx][sy]=zeroindex;

    for(int i = 0 ; i < 4;i++){
        int nx = sx + dx[i];
        int ny = sy + dy[i];
        if(visited[nx][ny]==0&&graph[nx][ny]==0&&nx>=0&&ny>=0&&nx<N&&ny<M){
            dfs(nx,ny,zeroidex);
        }
    }
}


int main(){

    cin >> N >> M;

    for(int i =0;i<N;i++){
        string s;
        cin >> s;
        for(int i1 = 0 ; i1 < M; i1++){
            graph[i][i1] = s[i1]-'0';
        }
    }
    v1.push_back(0);


    for(int i =0;i<N;i++){
        for(int i1=0;i1<M;i1++){
            if(visited[i][i1]==0&&graph[i][i1]==0){
                zeroindex++;
                dfs(i,i1,zeroindex);
                v1.push_back(cnt);
                //cout << cnt<<"\n";
                cnt=0;
            }

        }
    }

//0
//    for(int i = 0 ; i < N ;i++){
//        for(int i1=0;i1<M;i1++){
//            cout<<idx[i][i1];
//        }
//        cout<<"\n";
//    }
//    cout << "\n";
//
//    for(int i = 0 ; i<v1.size();i++){
//        cout << v1[i] << " ";
//    }
//    cout << "\n";


    for(int i = 0 ; i < N;i++){
        for(int i1=0;i1<M;i1++){
            if(visited[i][i1]==0&&graph[i][i1]==1){
                set<int>search;
                for(int i2 = 0 ; i2 < 4;i2++){
                    int nx = i + dx[i2];
                    int ny = i1 + dy[i2];
                    if(graph[nx][ny]==0 && nx>=0&&ny>=0&&nx<N&&ny<M){
                        if (search.find(idx[nx][ny]) == search.end()){
//                            if(i==2&&i1==1){
//                                cout << "finded!!"<<"\n"<< answer[i][i1] << " "<< v1[idx[nx][ny]]<< " " << idx[nx][ny]<<"\n";
//                            }
                            search.insert(idx[nx][ny]);
                            answer[i][i1] = answer[i][i1] + v1[idx[nx][ny]];
                        }

                    }
                }
                answer[i][i1] = answer[i][i1]+1;
                answer[i][i1] = answer[i][i1] % 10;
            }
        }
    }


    for(int i = 0 ; i < N;i++){
        for(int i1=0;i1<M;i1++){
            cout << answer[i][i1];
        }
        cout << "\n";
    }











}
