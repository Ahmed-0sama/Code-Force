import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int time = sc.nextInt();
        int[] arr = new int[size];
        boolean found = false;
        for (int i = 0; i < size ; i++) {
            int x = sc.nextInt();
            arr[i] = x;
        }
        Arrays.sort(arr); // sort the array for binary search to decrease the time complexity
        for (int i = 0; i < time; i++) {
            int search = sc.nextInt();
            found = Arrays.binarySearch(arr, search) >= 0; // use binary search
            if (found) {
                System.out.println("found");
            } else {
                System.out.println("not found");
            }
        }
    }
}