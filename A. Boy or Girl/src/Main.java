import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        char []ch=x.toCharArray();
        ch[0]=Character.toUpperCase(ch[0]);
        for(int i=0; i<ch.length;i++){
            System.out.print(ch[i]);
        }
    }
}