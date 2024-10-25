import java.io.*;
import java.util.*;

public class Main {

    public static class MinsikLanguage {

        String changed;
        String original;

        public MinsikLanguage(String changed, String original) {
            this.changed = changed;
            this.original = original;
        }

    }


    private static char translate(char c, char cp) {

        if(c == 'a'){
            return 'a';
        }

        if(c == 'b'){
            return 'b';
        }

        if(c == 'k'){
            return 'c';
        }

        if(c == 'd'){
            return 'd';
        }

        if(c == 'e'){
            return 'e';
        }

        if(c == 'g'){
            return 'f';
        }

        if(c == 'h'){
            return 'g';
        }

        if(c == 'i'){
            return 'h';
        }

        if(c == 'l'){
            return 'i';
        }

        if(c == 'm'){
            return 'j';
        }

        if(c == 'n' && cp == 'g'){
            return 'l';
        }

        if(c == 'n'){
            return 'k';
        }

        if(c == 'o'){
            return 'm';
        }

        if(c == 'p'){
            return 'n';
        }

        if(c == 'r'){
            return 'o';
        }

        if(c == 's'){
            return 'p';
        }

        if(c == 't'){
            return 'q';
        }

        if(c == 'u'){
            return 'r';
        }

        if(c == 'w'){
            return 's';
        }

        if(c == 'y'){
            return 't';
        }

        return 'u';
    }


    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());

        List<String> s = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            s.add(br.readLine());
        }

        List<MinsikLanguage> minsikLanguages = new ArrayList<>();

        for(int i = 0 ; i < n ; i++){
            String temp = "";
            for(int j = 0 ; j < s.get(i).length(); j++){
                temp += translate(s.get(i).charAt(j), j == s.get(i).length()-1 ? ' ' : s.get(i).charAt(j+1));
            }
            minsikLanguages.add(new MinsikLanguage(temp,s.get(i)));
        }

        Collections.sort(minsikLanguages, (a,b) -> {
            return a.changed.compareTo(b.changed);
        });

        for(MinsikLanguage m : minsikLanguages){
            System.out.println(m.original);
        }



    }

}