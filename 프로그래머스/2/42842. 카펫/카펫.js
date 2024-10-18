function solution(brown, yellow) {
    var answer = [];
    
    let W = 0, H = 0
    for (let yellowH = 1; yellowH <= Math.sqrt(yellow); yellowH++) {
        if (yellow % yellowH === 0) {
            let yellowW = yellow / yellowH;
            let brownTest = (yellowH * 2) + (yellowW * 2) + 4;
            if (brownTest === brown) {
                W = yellowW + 2;
                H = yellowH + 2;
            }
        }
    }
    answer = [W, H];
    
    return answer;
}