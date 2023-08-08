import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long num = sc.nextLong();
        if (prime(num)) {
            System.out.println("YES");

        } else {
            System.out.println("NO");
        }


    }

    static boolean prime(long x) {
        if (x <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(x); i++) {
            if (x % i == 0) {
                return false;

            }

        }
        return true;
    }
}
