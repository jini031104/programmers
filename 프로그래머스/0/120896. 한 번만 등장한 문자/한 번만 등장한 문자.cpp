#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";

    map<char,int> m;
    for(const auto v : s)
    {
        m[v]++;
    }

    for(const auto& v : m)
    {
        if(v.second == 1)
        {
            answer.push_back(v.first);
        }
    }
    return answer;
}