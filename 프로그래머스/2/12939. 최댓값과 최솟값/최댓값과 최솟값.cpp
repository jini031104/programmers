#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> vString;
    stringstream ss(s); 
	string s1; 
    
	while (ss>>s1) {
        vString.push_back(s1.c_str());
	}
    
    int Min = stoi(vString[0].c_str());
    int Max = stoi(vString[0].c_str());
    for(int i=0; i<vString.size(); i++) {
        Min = min(Min, stoi(vString[i].c_str()));
        Max = max(Max, stoi(vString[i].c_str()));
    }
    
    printf("%d %d", Min, Max);
    
    answer += to_string(Min);
    answer += ' ';
    answer += to_string(Max);
    
    return answer;
}