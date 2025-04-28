import java.util.*;
class Solution {
    
    public class BookTime {
        String startTime;
        String endTime;
        
        BookTime(String startTime, String endTime) {
            this.startTime = startTime;
            this.endTime = endTime;
        }
    }
    
    // Queue 대신 Stack 사용
    List<Stack<BookTime>> rooms = new ArrayList<>();
    
    public int solution(String[][] book_time) {
        // 시작 시간 기준으로 정렬
        Arrays.sort(book_time, (a, b) -> a[0].compareTo(b[0]));
        
        // 첫 번째 예약은 무조건 새 방 할당
        Stack<BookTime> firstStack = new Stack<>();
        firstStack.push(new BookTime(book_time[0][0], book_time[0][1]));
        rooms.add(firstStack);
        
        // 두 번째 예약부터 처리
        for(int i = 1; i < book_time.length; i++) {
            int emptyRoomIndex = findEmptyRoomIndex(book_time[i]);
            
            if(emptyRoomIndex == -1) {
                // 사용 가능한 방이 없으면 새 방 생성
                Stack<BookTime> newStack = new Stack<>();
                newStack.push(new BookTime(book_time[i][0], book_time[i][1]));
                rooms.add(newStack);
            } else {
                // 사용 가능한 방에 예약 추가
                rooms.get(emptyRoomIndex).push(new BookTime(book_time[i][0], book_time[i][1]));
            }
        }
        
        // 사용된 방의 수 반환
        return rooms.size();
    }
    
    // 시간 문자열을 분 단위로 변환하는 도우미 메서드
    private int convertToMinutes(String time) {
        String[] parts = time.split(":");
        int hours = Integer.parseInt(parts[0]);
        int minutes = Integer.parseInt(parts[1]);
        return hours * 60 + minutes;
    }
    
    // 사용 가능한 방 찾기
    public int findEmptyRoomIndex(String[] time) {
        String startTime = time[0];
        
        for(int i = 0; i < rooms.size(); i++) {
            Stack<BookTime> currentRoom = rooms.get(i);
            
            if(currentRoom.isEmpty()) {
                return i; // 빈 방 발견
            }
            
            // 스택의 peek() 메서드로 최상위(가장 최근) 예약 확인
            BookTime lastBooking = currentRoom.peek();
            
            // 청소 시간 10분 추가 (마지막 예약 종료 후 10분)
            int lastEndTimeInMinutes = convertToMinutes(lastBooking.endTime) + 10;
            int newStartTimeInMinutes = convertToMinutes(startTime);
            
            // 새 예약이 마지막 예약(+청소시간) 이후에 시작하면 사용 가능
            if(newStartTimeInMinutes >= lastEndTimeInMinutes) {
                return i;
            }
        }
        
        return -1; // 사용 가능한 방이 없음
    }
}