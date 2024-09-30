function solution(s) {
    var answer = [];
    let str = s, zero = 0, one = 0, count = 0;
    
    while(1) {
        if(str === '1')
            break;
        count++;
        
        for(let i=0; i<str.length; i++) {
            if(str[i] === '0')
                zero++;
            else
                one++;
        }
        
        str = one.toString(2);  // 2진수로 변환
        one = 0;
    }
    
    answer.push(count);
    answer.push(zero);
    
    return answer;
}