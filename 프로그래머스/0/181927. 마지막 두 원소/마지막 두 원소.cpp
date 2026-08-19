#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int len = num_list.size();
    int a = num_list[len - 2], b = num_list[len - 1];
    int result;
    
    if(a < b)
        result = b - a;
    else if(a > b)
        result = b * 2;
    
    num_list.push_back(result);
    
    return num_list;
}