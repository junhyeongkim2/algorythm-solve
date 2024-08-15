#include <string>
#include <vector>

using namespace std;


bool isFourOrSix(string s){
    if(s.length() == 4 || s.length()==6){
        return true;
    }
    return false;
    
}

bool isAllNumber(string s){
    
    
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] < '0' || s[i] > '9'){
            return false;
        }
        
    }
    
    return true;
    
    
}

bool solution(string s) {

    
    
    if(isFourOrSix(s) && isAllNumber(s)){
        return true;
    }    
    return false;
    

}