function solution(keymap, targets) {
    var answer = [];
    var str = [];
        
    for(var i=0; i<keymap.length; i++)
    {
        for(var j=0; j<keymap[i].length; j++)
        {
            var index = str.indexOf(keymap[i][j]);
            if(index !== -1)
            {   // 원소가 이미 존재할 경우
                if((j + 1) < str[index + 1])
                    str[index + 1] = (j + 1);
            }
            else
            {
                str.push(keymap[i][j]);
                str.push((j + 1));
            }
        }
    }
    
    for(var i=0; i<targets.length; i++)
    {
        answer.push(0);
        for(var j=0; j<targets[i].length; j++)
        {
            var index = str.indexOf(targets[i][j]);
            if(index !== -1)
            {
                answer[i] += str[index + 1];
            }
            else {
                answer[i] = -1;
                break;
            }
        }
    }
    
    return answer;
}