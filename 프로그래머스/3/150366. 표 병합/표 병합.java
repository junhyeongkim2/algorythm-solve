import java.util.*;

class Solution {
    
    String[][] board = new String[51][51];
    int[][] parent = new int[51][51]; // 대표 셀 추적 (y*51 + x 형태로 저장)
    
    // 생성자에서 초기화
    Solution() {
        for(int i = 0; i < 51; i++) {
            for(int j = 0; j < 51; j++) {
                parent[i][j] = i * 51 + j; // 자기 자신을 가리킴
            }
        }
    }
    
    // (y, x)의 대표 셀 찾기
    int[] find(int y, int x) {
        int p = parent[y][x];
        int py = p / 51;
        int px = p % 51;
        
        if(p == py * 51 + px && py == y && px == x) {
            return new int[]{y, x};
        }
        
        int[] root = find(py, px);
        parent[y][x] = root[0] * 51 + root[1]; // 경로 압축
        return root;
    }
    
    void update(int y, int x, String value) {
        int[] root = find(y, x);
        board[root[0]][root[1]] = value;
    }
    
    void updateAll(String from, String to) {
        for(int i = 1; i <= 50; i++) {
            for(int j = 1; j <= 50; j++) {
                int[] root = find(i, j);
                if(board[root[0]][root[1]] != null && board[root[0]][root[1]].equals(from)) {
                    board[root[0]][root[1]] = to;
                }
            }
        }
    }
    
    void merge(int y1, int x1, int y2, int x2) {
        // 같은 셀이면 무시
        if(y1 == y2 && x1 == x2) return;
        
        int[] root1 = find(y1, x1);
        int[] root2 = find(y2, x2);
        
        // 이미 병합되어 있으면 무시
        if(root1[0] == root2[0] && root1[1] == root2[1]) return;
        
        // 값 결정: 둘 다 값이 있으면 root1 값, 한쪽만 있으면 그 값
        String value1 = board[root1[0]][root1[1]];
        String value2 = board[root2[0]][root2[1]];
        
        String finalValue = null;
        if(value1 != null) {
            finalValue = value1;
        } else if(value2 != null) {
            finalValue = value2;
        }
        
        // root2를 root1에 병합
        parent[root2[0]][root2[1]] = root1[0] * 51 + root1[1];
        board[root1[0]][root1[1]] = finalValue;
        board[root2[0]][root2[1]] = null;
    }
    
    void unMerge(int y, int x) {
        int[] root = find(y, x);
        String value = board[root[0]][root[1]];
        
        // 같은 root를 가진 모든 셀 찾아서 분리
        List<int[]> toUnmerge = new ArrayList<>();
        for(int i = 1; i <= 50; i++) {
            for(int j = 1; j <= 50; j++) {
                int[] cellRoot = find(i, j);
                if(cellRoot[0] == root[0] && cellRoot[1] == root[1]) {
                    toUnmerge.add(new int[]{i, j});
                }
            }
        }
        
        // 모든 셀 분리
        for(int[] cell : toUnmerge) {
            parent[cell[0]][cell[1]] = cell[0] * 51 + cell[1];
            board[cell[0]][cell[1]] = null;
        }
        
        // (y, x) 위치에만 값 유지
        board[y][x] = value;
    }
    
    String print(int y, int x) {
        int[] root = find(y, x);
        String value = board[root[0]][root[1]];
        return value == null ? "EMPTY" : value;
    }
    
    public String[] solution(String[] commands) {
        List<String> prints = new ArrayList<>();
        
        for(String command : commands) {
            String[] splits = command.split(" ");
            
            if(splits[0].equals("UPDATE") && splits.length == 4) {
                int y = Integer.parseInt(splits[1]);
                int x = Integer.parseInt(splits[2]);
                update(y, x, splits[3]);
            }
            
            if(splits[0].equals("UPDATE") && splits.length == 3) {
                updateAll(splits[1], splits[2]);
            }
            
            if(splits[0].equals("MERGE")) {
                int y1 = Integer.parseInt(splits[1]);
                int x1 = Integer.parseInt(splits[2]);
                int y2 = Integer.parseInt(splits[3]);
                int x2 = Integer.parseInt(splits[4]);
                merge(y1, x1, y2, x2);
            }
            
            if(splits[0].equals("UNMERGE")) {
                int y = Integer.parseInt(splits[1]);
                int x = Integer.parseInt(splits[2]);
                unMerge(y, x);
            }
            
            if(splits[0].equals("PRINT")) {
                int y = Integer.parseInt(splits[1]);
                int x = Integer.parseInt(splits[2]);
                prints.add(print(y, x));
            }
        }
        
        return prints.toArray(new String[0]);
    }
}