import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;


class Main {	

	public static void main(String[]args) throws IOException {
		
		// ArrayList로 구현
		ArrayList<Boolean> primeList;

		// 사용자로부터의 콘솔 입력
		Scanner scan = new Scanner(System.in);
		

		boolean tf = true;
		int count =0;
		
		while( tf==true) {
			
			int nn = scan.nextInt();
			
			if(nn==0) {
				break;
			}
			
			
			primeList = new ArrayList<Boolean>(nn*2+1);
			// 0번째와 1번째를 소수 아님으로 처리
			primeList.add(false);
			primeList.add(false);
			// 2~ n 까지 소수로 설정
			for(int i=2; i<=nn*2; i++ )
				primeList.add(i, true);

			// 2 부터  ~ i*i <= n
			// 각각의 배수들을 지워간다.
			for(int i=2; (i*i)<=nn*2; i++){
				if(primeList.get(i)){
					for(int j = i*i; j<=nn*2; j+=i) {
						primeList.set(j, false);
					}
									
					//i*i 미만은 이미 처리되었으므로 j의 시작값은 i*i로 최적화할 수 있다.
				}
			}
			for(int i=0; i<=nn*2; i++){
				if(primeList.get(i) == true){
					if(nn<i&&i<=nn*2) {
						count++;
					}
						
					
					
				}
			}
			System.out.println(count);
			count=0;
			
			
			
			
			
		}
		
		
	
		// n <= 1 일 때 종료

		// n+1만큼 할당
		

				
	}
}
