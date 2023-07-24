#include <bits/stdc++.h>
using namespace std;


char m[3][3];
string input;


bool CheckXwin() {

    bool ret = false;
    for(int i = 0 ; i < 3; i++){
        if(m[i][0]=='X' && m[i][0]==m[i][1]&&m[i][1]==m[i][2]){
            ret= true;
        }
    }

    for(int i = 0 ; i < 3; i++){
        if(m[0][i]=='X' && m[0][i]==m[1][i]&&m[1][i]==m[2][i]){
            ret= true;
        }
    }

    if(m[0][0]=='X'&&m[0][0]==m[1][1]&&m[1][1]==m[2][2])
        ret= true;

    if(m[0][2]=='X'&&m[0][2]==m[1][1]&&m[1][1]==m[2][0])
        ret= true;

    return ret;
}
bool CheckOwin() {

    bool ret = false;

    for(int i = 0 ; i < 3; i++){
        if(m[i][0]=='O' && m[i][0]==m[i][1]&&m[i][1]==m[i][2]){
            ret = true;
        }
    }

    for(int i = 0 ; i < 3; i++){
        if(m[0][i]=='O' && m[0][i]==m[1][i]&&m[1][i]==m[2][i]){
            ret= true;
        }
    }

    if(m[0][0]=='O'&&m[0][0]==m[1][1]&&m[1][1]==m[2][2])
        ret= true;

    if(m[0][2]=='O'&&m[0][2]==m[1][1]&&m[1][1]==m[2][0])
        ret=  true;


    return ret;

}


int main() {

    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);


    while(true){
        cin >> input;
        if(input=="end"){
            break;
        }

        int onum = 0;
        int xnum = 0;
        bool owin = false, xwin = false;

        for(int i = 0 ; i <9; ++i){
            m[i/3][i%3]=input[i];
            if(input[i]=='O')
                ++onum;
            else if(input[i]=='X')
                ++xnum;
        }

        owin = CheckOwin();
        xwin = CheckXwin();


        if(xwin&&!owin&&xnum-onum==1){
            cout << "valid" << "\n";
        }else if (!xwin&&owin&&xnum==onum){
            cout << "valid" << "\n";
        }else if(!xwin&&!owin&&xnum==5&&onum==4){
            cout <<"valid" << "\n";
        }else{
            cout << "invalid" << "\n";
        }

    }







    return 0;
}

