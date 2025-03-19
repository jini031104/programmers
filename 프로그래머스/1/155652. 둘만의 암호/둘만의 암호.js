function solution(s, skip, index) {
    var answer = '';
    
    for(let i=0; i<s.length; i++) {
        let s_num = s[i].charCodeAt();
        for(let j=0; j<index; j++) {
            s_num++;
            s_num = 122 < s_num ? 97 : s_num;
            while(skip.includes(String.fromCharCode(s_num))) {
                s_num++;
                s_num = 122 < s_num ? 97 : s_num;
            }
        }
        answer += String.fromCharCode(s_num);
    }

    return answer;
}
