import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc =new Scanner(System.in);
        String x=sc.next();
        char[]c=x.toCharArray();
        Map<Character,Integer>m=new HashMap<>();
        for(int i=0;i< c.length;i++){
            m.putIfAbsent(c[i],i);
        }
        if(m.size()%2!=0){
            System.out.println("IGNORE HIM!");
        }
        else{
            System.out.println("CHAT WITH HER!");
        }
    }
}