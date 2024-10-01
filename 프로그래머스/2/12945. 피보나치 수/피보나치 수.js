function solution(n) {
    let answer = 0;
    let pi = [0, 1];
    
    for(let i=2; i<=n; i++) {
        pi.push((pi[i-1] + pi[i-2]) % 1234567);
    }
    answer = pi[n];
    
    return answer;
}