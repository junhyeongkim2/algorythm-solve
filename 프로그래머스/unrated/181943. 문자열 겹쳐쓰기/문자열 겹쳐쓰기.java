class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        
        
        String first = my_string.substring(0,s);
        String middle = overwrite_string;
        String end = my_string.substring(s+overwrite_string.length());

        
        System.out.println(first+middle+end);
        
        return first+middle+end;
        
        

        
        
        
    }
}