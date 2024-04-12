import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    private static final int[] COUNTER = new int[10];

    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));

        // 마지막 페이지
        int N = Integer.parseInt(reader.readLine());

        solve(N);

        StringBuilder builder = new StringBuilder();

        for (int item : COUNTER) {
            builder.append(item).append(" ");
        }

        writer.write(builder.toString().trim());
        writer.newLine();
        writer.flush();

        reader.close();
        writer.close();
    }


    private static void solve(int num) {
        // 시작 페이지
        int start = 1;

        // 자릿수
        int digit = 1;

        while (start <= num) {
            // 1의 자리가 9가 될 때까지 마지막 페이지를 1씩 감소함
            while (num % 10 != 9 && start <= num) {
                // 감소한 페이지 별도 카운팅
                count(num, digit);
                num--;
            }

            // 마지막 페이지가 시작 페이지보다 작을 경우
            if (num < start) {
                // 이를 처리하지 않으면 num < 9일 경우 무한루프를 탐
                break;
            }

            // 1의 자리가 0이 될 때까지 시작 페이지를 1씩 증가함
            while (start % 10 != 0 && start <= num) {
                // 증가한 페이지 별도 카운팅
                count(start, digit);

                start++;
            }

            start /= 10;
            num /= 10;

            for (int i = 0; i < 10; i++) {
                COUNTER[i] += (num - start + 1) * digit;
            }

            // 자릿수 증가
            digit *= 10;
        }
    }

    private static void count(int num, int digit) {
        while (num > 0) {
            COUNTER[num % 10] += digit;
            num /= 10;
        }
    }


}
