import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] cits = new int[n];
        for (int i = 0; i < n; i++) {
            cits[i] = scanner.nextInt();
        }

        int[][] sol = new int[n][2];

        for (int i = 0; i < n; i++) {
            int mx = Math.max(Math.abs(cits[i] - cits[0]), Math.abs(cits[i] - cits[n - 1]));
            int mn;
            if (i == 0) {
                mn = Math.abs(cits[i] - cits[i + 1]);
            } else if (i == n - 1) {
                mn = Math.abs(cits[i] - cits[i - 1]);
            } else {
                mn = Math.min(Math.abs(cits[i] - cits[i - 1]), Math.abs(cits[i] - cits[i + 1]));
            }
            sol[i][0] = mn;
            sol[i][1] = mx;
        }

        for (int i = 0; i < n; i++) {
            System.out.println(sol[i][0] + " " + sol[i][1]);
        }
    }
}