class Solution {
    public int solution(int a, int b) {
        int answer = 0;

            
        String sa = Integer.toString(a);
        String sb = Integer.toString(b);
        
        int changed_int1 = Integer.parseInt((sa+sb));
        int changed_int2 = Integer.parseInt((sb+sa));
        
        if(changed_int1 > changed_int2){
            return(Integer.parseInt(sa+sb));
        }else{
            return(Integer.parseInt(sb+sa));
        }
            
        
    }
}