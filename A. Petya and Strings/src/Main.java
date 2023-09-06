import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        String y= sc.next();
        String first=x.toLowerCase();
        String secound =y.toLowerCase();
        int res=first.compareTo(secound);
        if(res<0){
            System.out.println(-1);
        } else if (res>0) {
            System.out.println(1);
        }
        else System.out.println(0);


    }
}