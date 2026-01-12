#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    int test = cipher.size() / code;
    
    for(int i=1; i<=test; i++){
        answer += cipher[i*code - 1];
    }
    
    
    return answer;
}