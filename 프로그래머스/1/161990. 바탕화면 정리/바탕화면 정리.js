function solution(wallpaper) {
    var answer = [];
    var minY = -1, minX = -1, maxY = -1, maxX = -1;
    
    for(var i=0; i<wallpaper.length; i++) {
        for(var j=0; j<wallpaper[0].length; j++) {
            if(wallpaper[i][j] === "#") {
                if(minY === -1) {
                    minY = i;
                    minX = j;
                    maxY = i;
                    maxX = j;
                }
                minX = j < minX ? j : minX;
                maxY = i;
                maxX = maxX < j ? j : maxX;
            }
        }
    }
    
    answer.push(minY);
    answer.push(minX);
    answer.push(maxY + 1);
    answer.push(maxX + 1);
    
    return answer;
}