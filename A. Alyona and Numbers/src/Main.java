import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long x = scanner.nextLong();
        long y = scanner.nextLong();

        long[] a = new long[5];
        long[] b = new long[5];

        for (int i = 1; i <= x; i++) {
            a[i % 5]++;
        }

        for (int i = 1; i <= y; i++) {
            b[i % 5]++;
        }

        long count = (a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[3] * b[2] + a[4] * b[1]);
        System.out.println(count);
    }
}
