import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        for (int i = 1; i <= size; i++) {
            int size1 = sc.nextInt();
            int maxQuality = 0;
            int winner = 0;
            for (int j = 1; j <= size1; j++) {
                int words = sc.nextInt();
                int quality = sc.nextInt();
                if (words <= 10 && quality > maxQuality) {
                    maxQuality = quality;
                    winner = j;
                }
            }
            System.out.println(winner);
        }
    }
}