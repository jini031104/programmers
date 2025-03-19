function solution(ingredient) {
    var answer = 0;
    var stack = [];
    
    for(var i=0; i<ingredient.length; i++) {
        stack.push(ingredient[i]);
        
        if(4 <= stack.length) {
            if(stack[stack.length - 4] == 1 &&
              stack[stack.length - 3] == 2 &&
              stack[stack.length - 2] == 3 &&
              stack[stack.length - 1] == 1) {
                answer++;
                stack.splice(stack.length - 4, 4);
            }
        }
    }
    return answer;
}