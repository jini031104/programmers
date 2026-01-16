#include <vector>
using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> v;
    for(int i = 0; i < flag.size(); i++)
        flag[i] ? v.insert(v.end(), arr[i]*2, arr[i]) : v.erase(v.end() - arr[i], v.end());
    return v;
}