#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, pare = 0, hol = 0;
    
    for(int i=0; i<num_list.size(); i++){
        if(i % 2 == 0)
            pare += num_list[i];
        else
            hol += num_list[i];
    }
    
    answer = pare <= hol ? hol : pare;
    
    return answer;
}