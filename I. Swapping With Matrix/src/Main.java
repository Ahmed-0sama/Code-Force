import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int x = sc.nextInt();
        int y = sc.nextInt();
        int[][] arr = new int[size][size];
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                int num = sc.nextInt();
                arr[i][j] = num;
            }
        }
        swap(x-1, y-1, arr);
    }

    static void swap(int x, int y, int[][] arr) {
        for (int i = 0; i < arr.length; i++) {
            int temp = arr[i][x];
            arr[i][x] = arr[i][y];
            arr[i][y] = temp;
        }
        for (int j = 0; j < arr.length; j++) {
            int temp = arr[x][j];
            arr[x][j] = arr[y][j];
            arr[y][j] = temp;
        }
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}