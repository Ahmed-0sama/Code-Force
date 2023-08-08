import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        double percentage = sc.nextInt();
        double price= sc.nextInt();
        double original=(price/(1-(percentage/100)));
        System.out.println(original);


    }
}