#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i=0; i<photo.size(); i++){
        int score = 0;
        for(int j=0; j<photo[i].size(); j++){
            for(int n=0; n<name.size(); n++){
                if(photo[i][j] == name[n])
                    score += yearning[n];
            }
        }
        
        answer.push_back(score);
    }
    
    return answer;
}