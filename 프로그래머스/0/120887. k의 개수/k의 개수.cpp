#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string a = "";
    
    for(int t = i; t<=j; t++){
        a += to_string(t);
    }
    
    for(int t=0; t<a.size(); t++){
        if(a[t] == k + '0')
            answer++;
    }
    
    return answer;
}