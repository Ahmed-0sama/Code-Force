import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size= sc.nextInt();
        int maxCount = 0;

        for (int i = 0; i < size; i++) {
            long x = sc.nextLong();
            int count = 0;
            while (x % 2 == 0) {
                x /= 2;
                count++;
            }
            if (count > maxCount) {
                maxCount = count;
            }
        }

        System.out.println(maxCount);
    }
}
