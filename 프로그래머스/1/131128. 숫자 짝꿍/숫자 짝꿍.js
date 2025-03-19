function solution(X, Y) {
    var answer = '';
    var X_sort = [...X].sort((a, b) => b - a), Y_sort = [...Y].sort((a, b) => b - a);
    var i = 0, j = 0;
    
    while(i < X_sort.length && j < Y_sort.length) {
        if (X_sort[i] === Y_sort[j]) {
            answer += X_sort[i];
            i++;
            j++;
        } else if (X_sort[i] > Y_sort[j]) {
            i++;
        } else {
            j++;
        }
    }
    
    if(answer.length == 0) return "-1";
    if(answer[0] == "0") return "0";
    
    return answer;
}