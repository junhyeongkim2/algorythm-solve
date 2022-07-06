import java.io.*;
import java.sql.Array;
import java.util.*;


public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       // BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out)); // 선언

        Stack<Integer> stack = new Stack<>();


        int n = Integer.parseInt(br.readLine());

        for(int i = 0 ; i < n ; i ++ ){

            String s  = br.readLine();

            String ss = s.split(" ")[0];

            if(ss.equals("push")){
                stack.push(Integer.parseInt(s.split(" ")[1]) );
            }
            int sn=0;

            switch(ss){

                case "pop":
                    try{
                        sn = stack.pop();
                        System.out.println(sn);
                    }catch(Exception e){
                        System.out.println(-1);
                    }
                    break;

                case "size":
                    System.out.println(stack.size());
                    break;

                case "empty":
                    if(stack.isEmpty()){
                        System.out.println(1);
                    }else{
                        System.out.println(0);
                    }
                    break;
                case "top":
                    try{
                        sn = stack.peek();
                        System.out.println(sn);

                    }catch(Exception e ){
                        System.out.println(-1);
                    }
                    break;




            }



        }











        }
    }


