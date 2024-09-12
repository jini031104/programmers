function solution(park, routes) {
    let petX = 0, petY = 0;
    let answer = [0, 0];
    
    for(let y=0; y<park.length; y++) {
        for(let x=0; x<park[y].length; x++) {
            if(park[y][x] === 'S') {
                petX = x;
                petY = y;
            }
        }
    }
    
    for(let i=0; i<routes.length; i++) {
        let x = 0, y = 0;
        switch(routes[i][0]) {
            case "N":   // 북
                y -= 1;
                break;
            case "S":   // 남
                y = 1;
                break;
            case "W":   // 서
                x -= 1;
                break;
            case "E":   // 동
                x = 1;
                break;
        }
        
        let tempX = petX, tempY = petY;
        for(let go=0; go<parseInt(routes[i][2]); go++) {
            petX += x;
            petY += y;
            
            if(petX < 0 || petY < 0 ||
               park[0].length <= petX || park.length <= petY ||
               park[petY][petX] === 'X') {
                petX = tempX;
                petY = tempY;
                break;
            }
        }
    }
    answer = [petY, petX];
    
    return answer;
}