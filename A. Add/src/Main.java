import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num1= sc.nextInt();
        int num2= sc.nextInt();
        System.out.println(sum(num1,num2));


    }

    static int sum(int x, int y) {
        return (x+y);
    }
}