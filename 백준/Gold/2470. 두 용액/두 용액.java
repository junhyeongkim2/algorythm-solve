import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int[] liquids = new int[N];
        for (int i = 0; i < N; i++) {
            liquids[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(liquids);

        int left = 0;
        int right = N - 1;
        long minAbsSum = Long.MAX_VALUE;
        int answerLeft = 0;
        int answerRight = 0;

        while (left < right) {
            long sum = (long)liquids[left] + liquids[right];
            long absSum = Math.abs(sum);

            if (absSum < minAbsSum) {
                minAbsSum = absSum;
                answerLeft = liquids[left];
                answerRight = liquids[right];
            }

            if (sum < 0) {
                left++;
            } else if (sum > 0) {
                right--;
            } else {
                break;  // sum이 0이면 더 이상 찾을 필요 없음
            }
        }

        System.out.println(answerLeft + " " + answerRight);
    }
}