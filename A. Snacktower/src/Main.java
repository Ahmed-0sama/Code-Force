import java.util.Scanner;

public class Main {
    static boolean[] arr = new boolean[100001];
    static int current = 0;

    public static void print(int x, int current2) {
        if (x == current2) {
            for (int i = current2; i > 0; i--) {
                if (arr[i]) {
                    System.out.print(i + " ");
                    arr[i] = false;
                    current = i - 1;
                } else {
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        current = n;

        for (int i = 0; i < n; i++) {
            int x = scanner.nextInt();
            arr[x] = true;
            print(x, current);
            System.out.println();
        }

        scanner.close();
    }
}