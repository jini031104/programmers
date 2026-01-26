#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string c = "";
    
    if(my_string.size() < is_prefix.size())
        return 0;

    for(int i=0; i<is_prefix.size(); i++){
        c += my_string[i];
    }
    
    if(c == is_prefix)
        answer = 1;
    
    return answer;
}