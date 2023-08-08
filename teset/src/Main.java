import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int attempt = sc.nextInt();

        for (int i = 0; i < attempt; i++) {
            int size = sc.nextInt();
            int[] arr = new int[size];

            for (int j = 0; j < size; j++) {
                arr[j] = sc.nextInt();
            }

            int even = 0;
            int odd = 0;

            for (int k = 0; k < size; k++) {
                if (arr[k] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }

            if (even == odd) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}