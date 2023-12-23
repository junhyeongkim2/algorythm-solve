import java.io.*;
import java.util.*;


public class Main {
    static int n;
    static int map[][];
    static int dx[] = {0, 0, 1, -1};
    static int dy[] = {1, -1, 0, 0};
    static int ans = 0;
    static ArrayList<Node> list[];
    static HashMap<Integer, ArrayList<Integer>> hashmap = new HashMap<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.parseInt(br.readLine());

        list = new ArrayList[n * n];
        for (int i = 0; i < n * n; i++) {
            list[i] = new ArrayList<>();
        }
        map = new int[n + 1][n + 1];

        for (int i = 1; i <= n; i++) {
            Arrays.fill(map[i], -1);
        }

        for (int i = 0; i < n * n; i++) {
            String[] t = br.readLine().split(" ");
            int num = Integer.parseInt(t[0]);
            ArrayList<Integer> tmp = new ArrayList<>();
            for (int j = 1; j < t.length; j++) {
                tmp.add(Integer.parseInt(t[j]));
            }
            list[i].add(new Node(num, tmp));
            hashmap.put(num, tmp);
        }

        for (int i = 0; i < n * n; i++) {
            Node a = list[i].get(0);
            solve(a.num, a.list);
        }

        // 만족도 구하기

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int stNum = map[i][j];
                int cnt = 0;
                ArrayList<Integer> tmp = hashmap.get(stNum);

                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if (isRange(nx, ny) && tmp.contains(map[nx][ny])) {
                        cnt++;
                    }
                }
                if (cnt == 0) {
                    ans += 0;
                } else if (cnt == 1) {
                    ans += 1;
                } else if (cnt == 2) {
                    ans += 10;
                } else if (cnt == 3) {
                    ans += 100;
                } else {
                    ans += 1000;
                }
            }
        }
        System.out.println(ans);

    }

    public static void print() {
        System.out.println("=======");
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                System.out.print(map[i][j] + " ");
            }
            System.out.println();
        }

    }

    public static void solve(int student, ArrayList<Integer> solveList) {

        ArrayList<Dot> one = new ArrayList<>();
 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                int likecnt = 0;
                int emptycnt = 0;

                if (map[i][j] != -1) {
                    continue;
                }
                for (int k = 0; k < 4; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (isRange(nx, ny) && solveList.contains(map[nx][ny])) {
                        likecnt++;
                    }
                }
                emptycnt = getEmptyCnt(i, j);
                one.add(new Dot(i, j, likecnt, emptycnt));
            }
        }
        Collections.sort(one);
        Dot a = one.get(0);
        map[a.x][a.y] = student;
    }

    public static int getEmptyCnt(int x, int y) {
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isRange(nx, ny) && map[nx][ny] == -1) {
                cnt++;
            }
        }
        return cnt;
    }

    public static boolean isRange(int x, int y) {
        if (x >= 1 && y >= 1 && x <= n && y <= n) {
            return true;
        }
        return false;
    }
}

class Node {
    int num;
    ArrayList<Integer> list;

    Node(int num, ArrayList<Integer> list) {
        this.num = num;
        this.list = list;
    }
}

class Dot implements Comparable<Dot> {
    int x, y, likeCnt, emptyCnt;

    Dot(int x, int y, int likeCnt, int emptyCnt) {
        this.x = x;
        this.y = y;
        this.likeCnt = likeCnt;
        this.emptyCnt = emptyCnt;
    }

    @Override
    public int compareTo(Dot o) {

        if (this.likeCnt != o.likeCnt) {
            return o.likeCnt - this.likeCnt;
        }

        if (this.emptyCnt != o.emptyCnt) {
            return o.emptyCnt - this.emptyCnt;
        }

        if (this.x != o.x) {
            return this.x - o.x;
        }
        return this.y - o.y;
    }
}