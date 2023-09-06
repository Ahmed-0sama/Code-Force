import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        String y= sc.next();
        if(x.equals(y)){
            System.out.println("-1");
        } else if (x.length()>y.length()) {
            System.out.println(x.length());

        }

        else {
            System.out.println(y.length());
        }
    }
}