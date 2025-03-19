function solution(number, limit, power) {
    var answer = 0;
    
    for(var j=1; j<=number; j++)
    {
        var count = 1;
        
        for(var i=1; i<=j/2; i++)
        {
            if(j % i == 0)
                count++;
        }
        
        if(limit < count)
            count = power;
        answer += count;
    }
    
    return answer;
}