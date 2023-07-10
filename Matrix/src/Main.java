import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[][] arr = new int[size][size];

        int count = 0;
        int sum = 0;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int num = sc.nextInt();
                arr[i][j] = num;
                if (i == j) {
                    count += num;
                }
                if (i == size - 1 - j) {
                    sum += num;
                }
            }
        }
        System.out.println(Math.abs(count - sum));
    }
}