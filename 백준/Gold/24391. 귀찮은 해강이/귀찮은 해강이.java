import java.io.*;
import java.util.*;

public class Main {
    static int[] parent;
    
    // Find 연산 (경로 압축 적용)
    static int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    
    // Union 연산
    static void union(int a, int b) {
        a = find(a);
        b = find(b);
        if (a != b) {
            parent[b] = a;
        }
    }
    
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        
        // 부모 배열 초기화
        parent = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
        }
        
        // 연결된 건물들 Union
        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken());
            int b = Integer.parseInt(st.nextToken());
            union(a, b);
        }
        
        // 강의 순서 확인
        st = new StringTokenizer(br.readLine());
        int prev = Integer.parseInt(st.nextToken());
        int answer = 0;
        
        // 연속된 두 강의 건물이 같은 집합에 속하지 않으면 밖으로 나가야 함
        while (st.hasMoreTokens()) {
            int curr = Integer.parseInt(st.nextToken());
            if (find(prev) != find(curr)) {
                answer++;
            }
            prev = curr;
        }
        
        System.out.println(answer);
    }
}