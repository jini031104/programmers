#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, sum = num_list[0], dev = num_list[0];
    
    for(int i=1; i<num_list.size(); i++){
        sum += num_list[i];
        dev *= num_list[i];
    }
    
    if(dev < sum * sum)
        answer = 1;
    
    return answer;
}