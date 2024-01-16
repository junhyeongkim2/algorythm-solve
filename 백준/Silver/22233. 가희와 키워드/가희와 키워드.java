import java.io.*;
import java.util.*;
import java.util.stream.Collectors;


public class Main {

    static int n;
    static int m;
    static Map<String, Integer> keywords = new HashMap<String, Integer>();
    static List<String> usedKeywords = new ArrayList<String>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        for (int i = 0; i < n; i++) {
            keywords.put(br.readLine(), 1);
        }

        for (int i = 0; i < m; i++) {
            Arrays.stream(br.readLine().split(",")).forEach(keyword -> {
                if (keywords.containsKey(keyword)) {
                    keywords.remove(keyword);
                }
            });

            System.out.println(keywords.size());
        }


    }
}


