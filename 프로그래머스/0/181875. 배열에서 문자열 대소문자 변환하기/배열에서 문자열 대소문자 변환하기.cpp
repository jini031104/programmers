#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i=0; i<strArr.size(); i++){
        string test = "";
        for(int j=0; j<strArr[i].size(); j++){
            if(i%2==0){
                test += tolower(strArr[i][j]);
            } else {
                test += toupper(strArr[i][j]);
            }
        }
        answer.push_back(test);
    }
    
    return answer;
}