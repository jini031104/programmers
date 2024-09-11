function solution(players, callings) {
    let answer = [...players];
    const map = new Map();
    
    for(let i=0; i<players.length; i++) {
        map.set(players[i], i); // 이름, 등수
    }
    
    for(let i=0; i<callings.length; i++) {
        let tempIndex = map.get(callings[i]);   // 현재 등수
        
        if(0 < tempIndex) {
            let tempName = answer[tempIndex - 1];
            answer[tempIndex - 1] = answer[tempIndex];
            answer[tempIndex] = tempName;
            
            map.set(answer[tempIndex], tempIndex);
            map.set(answer[tempIndex - 1], tempIndex - 1);
        }
    }
    
    return answer;
}