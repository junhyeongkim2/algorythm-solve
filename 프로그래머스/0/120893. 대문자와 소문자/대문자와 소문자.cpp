#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    for(int i; i< my_string.length(); i++){
        
        if(islower( my_string[i])){
            my_string[i] = toupper(my_string[i]);
        }else{
            my_string[i] = tolower(my_string[i]);
        }
        
    }
    
    
    string answer = my_string;
    return answer;
}