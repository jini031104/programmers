#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int line[2], result[201] = {0};
    
    for(int i=0; i<3; i++){
        line[0] = lines[i][0] + 100;
        line[1] = lines[i][1] + 100;
        
        for(int j=line[0]; j<line[1]; j++){
            result[j]++;
        }
    }
    
    for(int i=0; i<201; i++){
        if(result[i] >= 2)
            answer++;
    }
    
    return answer;
}