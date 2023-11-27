import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0; i < t; i++) {
            long n = sc.nextLong();
            printDigits(n);
            System.out.println();
        }
    }

    static void printDigits(long n) {
        if (n < 10) {
            System.out.print(n + " "); // base case, print last digit and space
        } else {
            printDigits(n / 10); // call printDigits recursively with remaining digits
            System.out.print(n % 10 + " "); // print last digit and space
        }
    }
}