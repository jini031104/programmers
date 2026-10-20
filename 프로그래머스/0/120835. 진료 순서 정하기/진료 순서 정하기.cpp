#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    map<int, int> test;
    
    for(int i=0; i<emergency.size(); i++){
        answer.push_back(emergency[i]);
    }
    sort(answer.begin(), answer.end());
    
    for(int i=0; i<answer.size(); i++){
        int num = answer.size() - i;
        test.insert(pair<int, int>(answer[i], num));
    }
    
    answer.clear();
    for(int i=0; i<emergency.size(); i++){
        answer.push_back(test[emergency[i]]);
    }
    
    return answer;
}