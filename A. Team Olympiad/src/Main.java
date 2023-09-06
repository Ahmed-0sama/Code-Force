import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        int[][] arr = new int[4][5001];
        int[] count = new int[4];

        for (int id = 1; id <= n; id++) {
            int gifted = scanner.nextInt();
            count[gifted]++;
            arr[gifted][count[gifted]] = id;
        }

        int nteam = Math.min(Math.min(count[1], count[2]), count[3]);
        System.out.println(nteam);

        for (int i = 1; i <= nteam; i++) {
            System.out.println(arr[1][i] + " " + arr[2][i] + " " + arr[3][i]);
        }
    }
}