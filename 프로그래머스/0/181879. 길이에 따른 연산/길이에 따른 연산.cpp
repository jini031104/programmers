#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = num_list[0];
    
    for(int i=1; i<num_list.size(); i++){
        if(11 <= num_list.size()) {
            answer += num_list[i];
        }
        else {
            answer *= num_list[i];
        }
    }
    
    return answer;
}