import java.util.*;
class Solution {
 private int n;
      // 방법 1: 원형을 선형으로 변환하는 최적화된 솔루션
    public int solution(int n, int[] weak, int[] dist) {
        int weakLen = weak.length;
        int distLen = dist.length;
        
        // 원형을 선형으로 변환 (weak 배열을 2배로 확장)
        int[] linearWeak = new int[weakLen * 2];
        for (int i = 0; i < weakLen; i++) {
            linearWeak[i] = weak[i];
            linearWeak[i + weakLen] = weak[i] + n;
        }
        
        // 친구들의 순열 생성
        int[] distPerm = Arrays.copyOf(dist, distLen);
        Arrays.sort(distPerm);
        
        int answer = Integer.MAX_VALUE;
        
        // 모든 친구 순열에 대해 검사
        do {
            // 각 시작점에 대해 검사
            for (int start = 0; start < weakLen; start++) {
                int friendIdx = 0;
                int position = linearWeak[start];
                
                // start부터 시작하여 weakLen개의 취약점 커버 시도
                for (int i = start; i < start + weakLen; i++) {
                    // 현재 친구가 커버할 수 없으면 다음 친구 투입
                    if (linearWeak[i] > position + distPerm[friendIdx]) {
                        friendIdx++;
                        if (friendIdx >= distLen) break;
                        position = linearWeak[i];
                    }
                }
                
                // 모든 취약점을 커버했으면 최소값 갱신
                if (friendIdx < distLen) {
                    answer = Math.min(answer, friendIdx + 1);
                }
            }
        } while (nextPermutation(distPerm));
        
        return answer == Integer.MAX_VALUE ? -1 : answer;
    }
    
    // 순열 생성 헬퍼 함수
    private boolean nextPermutation(int[] arr) {
        int i = arr.length - 2;
        while (i >= 0 && arr[i] >= arr[i + 1]) i--;
        if (i < 0) return false;
        
        int j = arr.length - 1;
        while (arr[j] <= arr[i]) j--;
        
        swap(arr, i, j);
        reverse(arr, i + 1, arr.length - 1);
        return true;
    }
    
    private void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    private void reverse(int[] arr, int start, int end) {
        while (start < end) {
            swap(arr, start++, end--);
        }
    }
}