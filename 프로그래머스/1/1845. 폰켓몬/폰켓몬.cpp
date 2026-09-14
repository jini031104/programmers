#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0, len = nums.size() / 2;
    vector<int> poket;
    
    for(int i=0; i<nums.size(); i++){
        if(find(poket.begin(), poket.end(), nums[i]) == poket.end()){
            poket.push_back(nums[i]);
        }
    }
    
    if(len < poket.size())
        answer = len;
    else
        answer = poket.size();
    
    return answer;
}