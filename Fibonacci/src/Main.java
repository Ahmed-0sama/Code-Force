import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long   x = sc.nextInt();
        long fib0 = 0;
        long fib1 = 1;
        long  fibn = 0;
        if (x == 1) {
            fibn = fib0;
        } else if (x == 2) {
            fibn = fib1;
        } else {
            for (int i = 3; i <= x; i++) {
                fibn = fib0 + fib1;
                fib0 = fib1;
                fib1 = fibn;
            }
        }
        System.out.println(fibn);
    }
}