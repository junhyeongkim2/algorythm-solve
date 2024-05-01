class Solution {
    public int solution(int[] box, int n) {
        
        
        int widthCount = box[0] / n;
        int lengthCount = box[1] / n;
        int heightCount = box[2] / n;
        
        int answer = widthCount * lengthCount * heightCount;
        return answer;
    }
}