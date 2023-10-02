import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int ai = sc.nextInt();
            String numStr = String.valueOf(ai);
            boolean[] arr = new boolean[k + 1];

            for (char ch : numStr.toCharArray()) {
                int digit = ch - '0';
                if (digit <= k) {
                    arr[digit] = true;
                }
            }

            boolean allDigitsPresent = true;
            for (int j = 0; j <= k; j++) {
                if (!arr[j]) {
                    allDigitsPresent = false;
                    break;
                }
            }

            if (allDigitsPresent) {
                count++;
            }
        }

        System.out.println(count);
    }
}