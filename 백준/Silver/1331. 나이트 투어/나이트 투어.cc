#include <bits/stdc++.h>

using namespace std;

string s;

int arr[7][7];


int dx[8] = {1,-1,2,2,1,-1,-2,-2};
int dy[8] = {2,2,1,-1,-2,-2,1,-1};



int main() {

    int temp1=0;
    int temp2=0;

    int startx =0;
    int starty = 0;


    bool check2 = false;

    for (int i = 0; i <36 ; ++i) {
        cin >> s;
        char a = s.substr(0,1)[0]+1;
        int c = a - 'A';
        int b = stoi(s.substr(1,1));

        if(i==0){
            startx = c;
            starty = b;
        }


        bool check = false;

        if(i>0){
            for (int j = 0; j <8 ; ++j) {
                int nx = c+dx[j];
                int ny = b+dy[j];
                if(i<35){
                    if(nx == temp1 && ny == temp2 && nx>0 && ny >0 && nx<7 && ny<7){
                        check = true;
                    }
                }
                if(i==35){
                    if(nx == startx && ny == starty && nx>0 && ny >0 && nx<7 && ny<7){
                        check = true;
                    }
                }


            }

        }
        arr[c][b]++;
        if(i>0){
            if(arr[c][b]>1 || check == false){
                cout << "Invalid";
                check2=true;
                break;
            }
        }

        temp1 = c;
        temp2 = b;


    }

    if(check2==false){
        cout << "Valid";
    }

    cout << "\n";








}













