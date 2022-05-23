#include <iostream>
#include <cmath>


using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 0 ; i < t ; ++i){
        int x,y,r,x2,y2,r2;
        cin >> x>> y >> r >> x2 >> y2>> r2;
        double d = sqrt(((x-x2)*(x-x2)+(y-y2)*(y-y2))) ;
        double sub = r>r2 ? r-r2 : r2-r;

        if(d==0&&r ==r2){
            cout <<"-1" << "\n";
        }else if (r+r2==d||sub==d){
            cout << "1"<< "\n";
        }else if(sub < d && d < (r+r2)){
            cout << "2" << "\n";
        }else{
            cout << "0" << "\n";
        }










    }







}