#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    char test = s[0];
    int count = 1;
    
    for(int i=1; i<s.size(); i++){
        if(test != s[i]){
            if(count == 1)
                answer += test;
            test = s[i];
            count = 1;
        } else {
            count++;
        }
    }
    if(count == 1)
        answer += test;
    
    return answer;
}