#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string dartResult) {
    int answer = 0, count = 0;
    string num[3];
    vector<string> op;
    bool check = true;
    
    for(auto& c: dartResult){
        if('0' <= c && c <= '9') {
            num[count] += c;
            c = ' ';
            check = true;
        }
        else if(check) {
            check = false;
            count++;
        }
    }
    
    stringstream stream;
    string test;
    stream.str(dartResult);
    
    while (stream >> test){
        op.push_back(test);
    }
    
    int n[3];
    for(int i=0; i<3; i++){
        n[i] = stoi(num[i]);
    }
    
    for(int i=0; i<3; i++){
        for(int j=0; j<op[i].size(); j++){
            // S D T에 관한 것
            if(op[i][j] == 'D'){
                n[i] = n[i] * n[i];
            } else if(op[i][j] == 'T'){
                n[i] = n[i] * n[i] * n[i];
            }
            
            // * #에 관한 것
            if(op[i][j] == '*'){
                n[i] = n[i] * 2;
                if(1 <= i)
                    n[i-1] = n[i-1] * 2;
            } else if(op[i][j] == '#'){
                n[i] = -n[i];
            }
        }
    }
    
    answer = n[0] + n[1] + n[2];
    
    return answer;
}