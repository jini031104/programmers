#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    vector<int> h;
    h.push_back(a);
    
    for(int i=1; i<included.size(); i++){
        h.push_back(h[i-1] + d);      
    }
    
    for(int i=0; i<h.size(); i++){
        if(included[i] == true)
            answer += h[i];
    }
    
    return answer;
}