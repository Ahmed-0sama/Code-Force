import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

import static java.lang.System.exit;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        String x= sc.next();
        if(size<26){
            System.out.println("NO");
            exit(0);
        }
        String y=x.toLowerCase();
        char []c=y.toCharArray();
        Map<Character,Integer>m=new HashMap<>();
        for(int i=0; i<size;i++){
            char meow=c[i];
            m.putIfAbsent(meow,i);
        }
        if(m.size()==26){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}