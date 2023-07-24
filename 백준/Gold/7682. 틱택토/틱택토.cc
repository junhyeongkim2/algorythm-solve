#include <iostream>
#include <string>
using namespace std;


// X가 이겼는지 확인
bool checkX(char map[3][3]){

    for(int i = 0; i < 3; i++){
        // 가로 체크
        if(map[i][0] == 'X' && map[i][0] == map[i][1]
           && map[i][1] == map[i][2]) return true;

        // 세로 체크
        if(map[0][i] == 'X' && map[0][i] == map[1][i]
           && map[1][i] == map[2][i]) return true;
    }
    // 대각 체크
    if(map[0][0] == 'X' && map[0][0] == map[1][1]
       && map[1][1] == map[2][2]) return true;

    if(map[0][2] == 'X' && map[0][2] == map[1][1]
       && map[1][1] == map[2][0]) return true;

    return false;
}

// O가 이겼는지 확인
bool checkO(char map[3][3]){
    for(int i = 0; i < 3; i++){
        if(map[i][0] == 'O' && map[i][0] == map[i][1]
           && map[i][1] == map[i][2]) return true;

        if(map[0][i] == 'O' && map[0][i] == map[1][i]
           && map[1][i] == map[2][i]) return true;
    }
    if(map[0][0] == 'O' && map[0][0] == map[1][1]
       && map[1][1] == map[2][2]) return true;

    if(map[0][2] == 'O' && map[0][2] == map[1][1]
       && map[1][1] == map[2][0]) return true;

    return false;
}
int main(){
    string input;
    while(true){
        char map[3][3];
        cin >> input;
        if(input[0] == 'e') break;

        // x와 o의 개수
        int x = 0;
        int o = 0;
        for(int i = 0; i < 9; i++) {
            // 3x3 2차원 배열로 만들기
            map[i/3][i%3] = input[i];
            if(input[i] == 'X') x++;
            else if(input[i] == 'O') o++;
        }
        bool isX = checkX(map);
        bool isO = checkO(map);

        if(isX && !isO && x == o+1) printf("valid\n"); // X가 이긴 경우
        else if(!isX && isO && x == o) printf("valid\n"); // O가 이긴 경우
        else if(!isX && !isO && x == 5 && o == 4) printf("valid\n"); // 가득 찬 경우
        else printf("invalid\n"); // 위 경우에 다 포함 안될때
    }
    return 0;
}