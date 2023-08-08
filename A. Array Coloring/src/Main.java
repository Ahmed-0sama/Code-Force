import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // number of test cases

        while (t-- > 0) {
            int n = scanner.nextInt(); // length of the array
            int[] arr = new int[n]; // array elements

            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }

            boolean result = isPossibleToColor(arr);
            System.out.println(result ? "YES" : "NO");
        }
    }

    public static boolean isPossibleToColor(int[] arr) {
        int evenSum = 0;
        int oddSum = 0;

        for (int num : arr) {
            if (num % 2 == 0) {
                evenSum += num;
            } else {
                oddSum += num;
            }
        }

        // Check if both sums have different parities
        return evenSum % 2 == oddSum % 2;
    }
}