import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n, m;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        double result;
        int[] num = new int[n];
        for (int i = 0; i < n; i++) {
            num[i] = sc.nextInt();
        }
        Arrays.sort(num);

        double maxDist = 0;
        for (int i = 0; i < n - 1; i++) {
            double currentDist = (num[i + 1] - num[i]) / 2.0;
            if (currentDist > maxDist) {
                maxDist = currentDist;
            }
        }

        // Check the distance from the first element to 0
        double x = num[0];
        if (x > maxDist) {
            maxDist = x;
        }

        // Check the distance from the last element to m
        double y = m - num[n - 1];
        if (y > maxDist) {
            maxDist = y;
        }

        System.out.println(maxDist);
    }
}
