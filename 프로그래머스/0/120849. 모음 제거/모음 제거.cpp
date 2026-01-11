#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string m = "aeiou";
    
    for(int i=0; i<my_string.size(); i++){
        int same = false;
        for(int j=0; j<m.size(); j++){
            if(my_string[i] == m[j])
                same = true;
        }
        
        if(same == true)
            continue;
        
        answer += my_string[i];
    }
    
    return answer;
}