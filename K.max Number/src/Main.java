import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        for (int i = 0; i < size; i++) {
            int s = sc.nextInt();
            arr[i] = s;
        }
        System.out.println(max(arr, size - 1, arr[0]));
    }

    static int max(int[] arr, int size, int maxic) {
        if (size == -1) {
            return maxic;
        } else {
            if (arr[size] > maxic) {
                maxic = arr[size];
            }
            return max(arr, size - 1, maxic);
        }
    }
}