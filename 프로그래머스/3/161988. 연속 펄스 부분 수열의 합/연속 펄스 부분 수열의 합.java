import java.util.*;
class Solution {
    public long solution(int[] sequence) {
        long answer = 0;
        
        // 첫번째 분기 시작을 1로할까 -1로할까.. ->2개로분리
        // dp[n] = n까지 돌았는데 가장 큰 값을 추출
        // dp[n+1] = Math.max(dp[n]+현재값, 현재값)
        // dp[n]+현재값이 더 크면 수열을 1 늘리는것과 같음
        // dp[n]+현재값이 더 작으면, 수열의 스타팅포인트를 초기화 하는게 더이득임.
        
        long[] dp1 = new long[sequence.length];
        long[] dp2 = new long[sequence.length];
        
        dp1[0]=sequence[0];
        dp2[0]=sequence[0]*-1;
        
        for(int i=1;i<sequence.length;i++){
            long num= sequence[i];
            
            if(i%2==1){
                dp1[i]=Math.max(dp1[i-1]+num*-1,num*-1);
                dp2[i]=Math.max(dp2[i-1]+num,num);
            }else{
                dp1[i]=Math.max(dp1[i-1]+num,num);
                dp2[i]=Math.max(dp2[i-1]+num*-1,num*-1);
            }
        }
        
        int size =sequence.length-1;
        
        Arrays.sort(dp1);
        Arrays.sort(dp2);
        
        answer=Math.max(dp1[size],dp2[size]);
        
        return answer;
    }
}