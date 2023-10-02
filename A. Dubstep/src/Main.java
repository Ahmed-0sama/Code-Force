import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        String y=x.replace("WUB"," ");
        System.out.println(y);
    }
}