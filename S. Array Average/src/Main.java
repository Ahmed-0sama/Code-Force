import java.util.Scanner;

public class Main {

    public static double average(int[] array, int n) {
        // Base case
        if (n == 0) {
            return 0.0;
        }

        // Recursive step
        return (array[0] + average(array, n - 1)) / (double) n;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = scanner.nextInt();
        }

        double average = average(array, n);
        System.out.printf("%.6f\n", average);
    }
}