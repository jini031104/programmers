#include <string>
#include <vector>

using namespace std;

int solution(vector<int> box, int n) {
    int d1, d2, d3;
    
    d1 = box[0] / n;
    d2 = box[1] / n;
    d3 = box[2] / n;
    
    return d1 * d2 * d3;
}