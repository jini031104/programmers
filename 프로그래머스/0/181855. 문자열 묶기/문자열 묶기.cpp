#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> vec(30);
    
    for(int i=0; i<strArr.size(); i++){
        vec[strArr[i].size() - 1]++;
    }
    
    answer = *max_element(vec.begin(), vec.end());
    
    return answer;
}