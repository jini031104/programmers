function solution(s) {
    let answer = '';
    let arr = s.split(' ');
    
    for(let i=0; i<arr.length; i++) {
        let string = '';
        if (arr[i]) {
            let small = arr[i].toLowerCase();    // 전체를 소문자로 변환
            let big = arr[i][0].toUpperCase();    // 그 뒤 앞 글자만 대문자 변환
            string = big + small.slice(1);
        }
        answer += string + ' ';
    }
    answer = answer.slice(0, answer.length - 1);

    return answer;
}