import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sz = scanner.nextInt();
        long[] arr = new long[sz];
        int[] farr = new int[1000000];
        int maxx = Integer.MIN_VALUE;

        for (int i = 0; i < sz; i++) {
            arr[i] = scanner.nextLong();
            farr[(int) arr[i]]++;
        }

        for (int i = 0; i < 1000000; i++) {
            if (farr[i] != 0) {
                maxx = Math.max(maxx, farr[i]);
            }
        }

        if (sz % 2 == 0) {
            if (maxx <= sz / 2) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        } else {
            int fc = sz / 2;
            if (maxx <= fc + 1) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
