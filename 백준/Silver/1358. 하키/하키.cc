#include <iostream>

using namespace std;

int main(){

    int w,h,x,y,p,r;

    cin >> w>>h>>x>>y>>p;

    r = h/2;

    int xp, yp;
    int count=0;

    for(int i = 0 ; i < p ; i++){

        cin >> xp >> yp;

        if(x<=xp&&xp<=(x+w)&&(y<=yp&&yp<=(y+h))){
            count+=1;
            continue;
        }else if(((xp-x)*(xp -x))+((yp-(y+r))*(yp-(y+r)))<=((r)*(r))&&xp<x  ){
            count +=1;
            continue;
        }else if ((xp-(x+w))*(xp-(x+w))+(yp-(y+r))*(yp-(y+r))<=((r)*(r))&&xp>x+w ){
            count+=1;
            continue;
        }


    }
    cout << count;

}

