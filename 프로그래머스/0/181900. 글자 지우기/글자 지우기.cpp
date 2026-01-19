#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    
    for(int i=0; i<my_string.size(); i++){
        bool same = false;
        for(int j=0; j<indices.size(); j++){
            if(i == indices[j]){
                same = true;
                break;
            }
        }
        
        if(same == false)
            answer += my_string[i];
    }
    
    return answer;
}