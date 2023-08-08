import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        double x=sc.nextDouble();

        System.out.println(logCalculator1(x));

    }
    public static int logCalculator1(double n) {
        if (n < 2)
            return 0;
        return 1 + logCalculator1(n / 2);
    }
}