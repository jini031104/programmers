function solution(babbling) {
  var answer = 0;
  for(var s=0; s<babbling.length; s++) {
      var flag=0; var j=true; var i=0;
      while(1)
      {
          if(babbling[s].length <= i)
              break;
          
          if(babbling[s].slice(i, i+3)=="aya" && flag!=1) 
          { 
              flag=1;
              i+=3;
          }
          else if(babbling[s].slice(i,i+2)=="ma" && flag!=2) 
          { 
              flag=2; 
              i+=2;
          }
          else if(babbling[s].slice(i,i+3)=="woo" && flag!=3) 
          { 
              flag=3; 
              i+=3;
          }
          else if(babbling[s].slice(i,i+2)=="ye" && flag!=4) 
          { 
              flag=4; 
              i+=2;
          }
          else 
          { 
              j=false; 
              break; 
          }
      }
      if(j==true)
          answer++;
  }
  
  return answer;
}