#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string str = "";
    
    for(int i=0; i<myStr.size(); i++){
        if((myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c') && str.size() != 0){
            answer.push_back(str);
            str = "";
        } else if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c'){
            str += myStr[i];
        }
    }
    
    if(str.size() != 0)
        answer.push_back(str);
    
    if(answer.size() == 0)
        answer.push_back("EMPTY");
    
    return answer;
}