class Solution {
    public int solution(int a, int b) {
        
        String sa = Integer.toString(a);
        String sb = Integer.toString(b);
        
        if ( Integer.parseInt(sa+sb)  < (2 * a * b) ){
            System.out.print(2*a*b);
            return (2*a*b);
        }else{
            System.out.print(sa+sb);
            return Integer.parseInt(sa+sb);
        }

    
    }
}