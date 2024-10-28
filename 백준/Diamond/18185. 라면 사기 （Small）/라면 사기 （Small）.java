import java.io.*;
import java.util.*;

public class Main {



    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int count = st.countTokens();
        int result = 0;
        int[] inputArr = new int[count+2];
        inputArr[inputArr.length - 2] = 0;
        inputArr[inputArr.length - 1] = 0;

        for(int i = 0; i < count; i++) {
            inputArr[i] = Integer.parseInt(st.nextToken());
        }

        for(int i = 0 ; i < N; i++){
            if(inputArr[i+1] > inputArr[i+2]){
                int two = Math.min(inputArr[i], inputArr[i+1] - inputArr[i+2]);
                result += two * 5;
                inputArr[i] -= two;
                inputArr[i+1] -= two;

                int three = Math.min(inputArr[i], Math.min(inputArr[i+1],inputArr[i+2]));
                result += three * 7;
                inputArr[i] -= three;
                inputArr[i+1] -= three;
                inputArr[i+2] -= three;
            }else{
                int three = Math.min(inputArr[i], Math.min(inputArr[i+1],inputArr[i+2]));
                result += three * 7;
                inputArr[i] -= three;
                inputArr[i+1] -= three;
                inputArr[i+2] -= three;

                int two = Math.min(inputArr[i], inputArr[i+1]);
                result += two * 5;
                inputArr[i] -= two;
                inputArr[i+1] -= two;
            }
            result += 3 * inputArr[i];
        }

        System.out.println(result);




    }






}