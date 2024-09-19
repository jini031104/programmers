function solution(id_list, report, k) {
    var answer = [];
    report = [...new Set(report)];
    var map = new Map();
    var user = [];
    
    for(let i=0; i<report.length; i++){
        user.push(report[i].split(' '));
    }
    var report_id = {};
    var result_id = {};
    for(let i=0; i<id_list.length; i++) {
        report_id[id_list[i]] = 0;
        result_id[id_list[i]] = 0;
    }
    for(let i=0; i<user.length; i++) {
        report_id[user[i][1]]++;
    }
    
    for(let i=0; i<user.length; i++) {
        if(k <= report_id[user[i][1]])
            result_id[user[i][0]]++;
    }
    for(let i=0; i<id_list.length; i++) {
        answer.push(result_id[id_list[i]]);
    }
    
    return answer;
}