import java.io.*;
import java.util.*;
import java.util.stream.Collectors;


public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        String p = br.readLine();

        int[] t = makeTable(p);
        System.out.println(n - t[n - 1]);

    }

    private static int[] makeTable(String pattern) {
        int n = pattern.length();
        int[] table = new int[n];
        int idx = 0;

        for (int i = 1; i < n; i++) {
            while (idx > 0 && pattern.charAt(i) != pattern.charAt(idx)) {
                idx = table[idx - 1];
            }
            if (pattern.charAt(i) == pattern.charAt(idx)) {
                table[i] = ++idx;
            }
        }
        return table;
    }


}


