import java.io.*;
import java.util.*;


public class Main {
    static int count = 1; // 방문 순서
    static int[] order;
    static boolean[] isCutVertax; // 단절점

    static List<Node> ans;

    public static class Node {
         int x;
         int y;

        public Node(int x, int y) {
            this.x = x;
            this.y = y;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int V = Integer.valueOf(st.nextToken()); // 정점의 개수
        int E = Integer.valueOf(st.nextToken()); // 간선의 개수

        ArrayList<ArrayList<Integer>> a = new ArrayList<>();
        for (int i = 0; i <= V; i++) {
            a.add(new ArrayList<>());
        }

        // 양방향 인접 리스트 구현.
        for (int i = 0; i < E; i++) {
            st = new StringTokenizer(br.readLine());

            int A = Integer.parseInt(st.nextToken());
            int B = Integer.parseInt(st.nextToken());

            a.get(A).add(B);
            a.get(B).add(A);
        }

//        for(int i = 1 ; i <= E; i++){
//            System.out.print(a.get(i) + " ");
//            System.out.println();
//        }

        order = new int[V + 1];
        ans = new ArrayList<>();

        for (int i = 1; i <= V; i++) {
            if (order[i] == 0) {
                dfs(i, 0, a);
            }
        }

        Collections.sort(ans, (a1, a2) -> (a1.x == a2.x) ? a1.y - a2.y : a1.x - a2.x);

        StringBuilder sb = new StringBuilder();
        sb.append(ans.size() + "\n");

        for (int i = 0; i < ans.size(); i++) {
            sb.append(ans.get(i).x + " " + ans.get(i).y+"\n");
        }

        bw.write(sb.toString());
        bw.flush();
        bw.close();
        br.close();
    }

    public static int dfs(int vertax, int parent, ArrayList<ArrayList<Integer>> a) {
        order[vertax] = count++; // 방문 순서 저장
        int ret = order[vertax];

        // 자식 검사
        for (int now : a.get(vertax)) {
            if (now == parent) {
                continue;
            }
            if (order[now] == 0) { // 자식 정점이 방문되지 않았을 경우

                // 자식 정점 중 방문 순서가 가장 빠른 값.
                // 이때, 특정 자식 정점이 여러 개의 정점을 타고 타고 올라가서 1번 정점까지
                // 갈 수도 있다는 점에 유의해야 함.
                int low = dfs(now, vertax, a);

                // 루트 정점이 아니고,
                // 가장 작은 방문 순서가 vertax의 방문 순서보다 크거나 같을 경우
                // 해당 vertax는 단절점임.
                if (low > order[vertax]) {
                    if (now > vertax) {
                        ans.add(new Node(vertax, now));
                    } else {
                        ans.add(new Node(now, vertax));
                    }
                }
                ret = Math.min(ret, low);
            } else { // 자식 정점이 방문되었을 경우
                ret = Math.min(ret, order[now]);
            }
        }

        // 루트 정점이고,
        // 자식의 개수가 2개 이상이면 단절점임.

        return ret;
    }
}