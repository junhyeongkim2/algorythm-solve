import java.io.*;
import java.sql.Array;
import java.util.*;
import java.util.stream.Collectors;

public class Main {


    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner sc = new Scanner(System.in);

        int n = 0;
        n = sc.nextInt();

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            arr.add(sc.nextInt());
        }
        
        arr.sort(Comparator.naturalOrder());


        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += arr.get(i);
        }

        System.out.println(ans);

    }
}
