import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = (int) 1e9;

        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            m = Math.min(m, Math.abs(x));
        }

        System.out.println(m);
    }
}