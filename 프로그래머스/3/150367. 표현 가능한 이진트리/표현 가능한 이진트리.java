class Solution {
    public int[] solution(long[] numbers) {
        int[] result = new int[numbers.length];
        
        for (int i = 0; i < numbers.length; i++) {
            // 이진수 문자열로 변환
            String binary = Long.toBinaryString(numbers[i]);
            
            // 포화 이진트리 크기 계산 (2^n - 1 형태)
            int binaryLength = binary.length();
            int height = 0;
            
            // 현재 이진수 길이를 포함할 수 있는 최소 포화 이진트리 높이 찾기
            while ((1 << (height + 1)) - 1 < binaryLength) {
                height++;
            }
            
            // 필요한 노드 수 (포화 이진트리의 전체 노드 수)
            int fullTreeSize = (1 << (height + 1)) - 1;
            
            // 앞에 0을 추가하여 포화 이진트리 크기로 만들기
            if (fullTreeSize > binaryLength) {
                int paddingSize = fullTreeSize - binaryLength;
                StringBuilder sb = new StringBuilder();
                for (int j = 0; j < paddingSize; j++) {
                    sb.append('0');
                }
                sb.append(binary);
                binary = sb.toString();
            }
            
            // 유효한 이진트리인지 검증
            if (isValidBinaryTree(binary)) {
                result[i] = 1;
            } else {
                result[i] = 0;
            }
        }
        
        return result;
    }
    
    private boolean isValidBinaryTree(String binary) {
        return checkSubtree(binary, 0, binary.length() - 1);
    }
    
    private boolean checkSubtree(String binary, int start, int end) {
        // 빈 구간은 유효함
        if (start > end) {
            return true;
        }
        
        // 중위 순회에서 루트는 중간 위치
        int mid = (start + end) / 2;
        char rootValue = binary.charAt(mid);
        
        // 루트가 더미 노드(0)인 경우
        if (rootValue == '0') {
            // 전체 서브트리가 모두 더미 노드여야 함
            for (int i = start; i <= end; i++) {
                if (binary.charAt(i) == '1') {
                    return false;
                }
            }
            return true;
        }
        
        // 루트가 실제 노드(1)인 경우
        // 왼쪽과 오른쪽 서브트리를 재귀적으로 검증
        boolean leftValid = checkSubtree(binary, start, mid - 1);
        boolean rightValid = checkSubtree(binary, mid + 1, end);
        
        return leftValid && rightValid;
    }
}