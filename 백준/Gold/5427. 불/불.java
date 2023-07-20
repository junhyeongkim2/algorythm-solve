import java.io.*;
import java.sql.Array;
import java.util.*;

class Point{
    int y;
    int x;
    Point(int y, int x){
        this.x = x;
        this.y = y;
    }
}

public class Main {


     static int R,C;
     static boolean [][] visited;
     static final int [][] di = {{0,1},{1,0},{-1,0},{0,-1}};
     static char [][] graph;

    static Queue<Point>startQ;
    static Queue<Point>fireQ;
    static class Point {
        int x;
        int y;

        Point(int y, int x){
            this.y= y;
            this.x = x;
        }
    }



    public static void main(String[] args) throws NumberFormatException, IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int T = Integer.parseInt(st.nextToken());

        while (T-- > 0) {

            int r = 0, c = 0;
            st = new StringTokenizer(br.readLine());
            R = Integer.parseInt(st.nextToken());
            C = Integer.parseInt(st.nextToken());

            visited = new boolean[C][R];
            graph = new char[C+1][R+1];
            startQ = new LinkedList<Point>();
            fireQ = new LinkedList<Point>();

            ArrayList<Point> fire = new ArrayList<Point>();

            for (int i = 0; i < C; i++) {
                String s = br.readLine();
                for (int j = 0; j < R; j++) {
                    char ca = s.charAt(j);
                    graph[i][j]=ca;
                    if (ca == '@') {
                        r = j;
                        c = i;
                    } else if (ca == '*') {
                        fire.add(new Point(i, j));
                        graph[i][j]='#';
                    }
                }
            }

            bfs(r, c, fire);
        }
    }

    public static void bfs(int r, int c, ArrayList<Point> fire){


        int cnt = 0;

        startQ.add(new Point(c,r));

        for (int i = 0; i < fire.size() ; i++) {
//            System.out.println(fire.get(i).y + " " + fire.get(i).x + "fire!!!");
            fireQ.add(new Point (fire.get(i).y, fire.get(i).x));
        }

        while(!startQ.isEmpty()){
            int fireQSize = fireQ.size();
            cnt++;

            for(int i = 0 ; i < fireQSize; i++){
                Point poll = fireQ.poll();
                int cr = poll.x;
                int cc = poll.y;
                fireQ.peek();

//                System.out.println(cr+" " +cc);

                for(int j = 0 ; j < 4; j ++){
                    int nr = (cr + di[j][0]);
                    int nc = (cc + di[j][1]);
//                    System.out.println(nr + " " + nc);
                    if(nr >= 0 && nc >= 0 && nr < R && nc < C && (graph[nc][nr]=='.'||graph[nc][nr]=='@')){
//                        System.out.println("fire!!!!");

                        graph[nc][nr] = '#';
                        fireQ.offer(new Point(nc,nr));
                    }
                }
            }




            int startQSize = startQ.size();

            for(int i = 0 ; i < startQSize; i++){
                Point poll = startQ.poll();
                int cr = poll.x;
                int cc = poll.y;
                startQ.peek();

                for(int j = 0 ; j < 4; j ++){
                    int nr = cr + di[j][0];
                    int nc = cc + di[j][1];

                    if(nr<0 || nr>=R || nc >=C || nc<0){
                        System.out.println(cnt);
                        return;
                    }

                    if(nr>=0 && nc >=0 && nr<R && nc < C && graph[nc][nr]!='#'&&!visited[nc][nr]){
                        startQ.offer(new Point(nc,nr));
                        visited[nc][nr]=true;
                    }
                }
            }
        }


        System.out.println("IMPOSSIBLE");

    }



}
