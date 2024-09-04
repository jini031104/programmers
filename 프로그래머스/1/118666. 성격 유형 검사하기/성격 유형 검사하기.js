function solution(survey, choices) {
    var answer = '';
    const m = new Map();
    let score = [0, 3, 2, 1, 0, 1, 2, 3];
    let str = ['R', 'T', 'C', 'F', 'J', 'M', 'A', 'N'];
    for(let i=0; i<8; i++) {
        m.set(str[i], 0);
    }
    
    for(let i=0; i<survey.length; i++) {
        m.set(survey[i][Math.floor(choices[i] / 4)], m.get(survey[i][Math.floor(choices[i] / 4)]) + score[choices[i]]);
        console.log(survey[i][Math.floor(choices[i] / 4)] + " " + m.get(survey[i][Math.floor(choices[i] / 4)]));
    }
    
    answer += m.get('R') >= m.get('T') ? 'R' : 'T';
    answer += m.get('C') >= m.get('F') ? 'C' : 'F';
    answer += m.get('J') >= m.get('M') ? 'J' : 'M';
    answer += m.get('A') >= m.get('N') ? 'A' : 'N';
    
    return answer;
}