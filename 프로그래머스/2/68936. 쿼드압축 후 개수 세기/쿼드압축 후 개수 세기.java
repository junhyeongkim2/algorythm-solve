class Solution {
    
  int zero = 0;
    int one = 0;
    
    public int[] solution(int[][] arr) {
        int n = arr.length;
        
        quadCompress(0, 0, n, arr);
        
        return new int[]{zero, one};
    }
    
    public void quadCompress(int startRow, int startCol, int size, int[][] arr) {
        // 모든 값이 같은지 확인
        boolean allSame = true;
        int firstValue = arr[startRow][startCol];
        
        for (int i = startRow; i < startRow + size; i++) {
            for (int j = startCol; j < startCol + size; j++) {
                if (arr[i][j] != firstValue) {
                    allSame = false;
                    break;
                }
            }
            if (!allSame) break;
        }
        
        // 모든 값이 같으면 해당 값 카운트 증가
        if (allSame) {
            if (firstValue == 0) zero++;
            else one++;
            return;
        }
        
        // 영역을 4등분하여 재귀 호출
        int newSize = size / 2;
        
        quadCompress(startRow, startCol, newSize, arr);                   // 좌상단
        quadCompress(startRow, startCol + newSize, newSize, arr);         // 우상단
        quadCompress(startRow + newSize, startCol, newSize, arr);         // 좌하단
        quadCompress(startRow + newSize, startCol + newSize, newSize, arr); // 우하단
    }
    

    
    
    
}