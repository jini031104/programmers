#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    int count = 0;
    
    while(count < num_list.size()){
        answer.push_back(num_list[count]);
        count += n;
    }
    
    return answer;
}