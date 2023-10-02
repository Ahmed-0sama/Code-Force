import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n, counter = 1;
        n = scanner.nextInt();
        String[] list = new String[100];
        list[0] = scanner.next();
        String winner = list[0], player2 = "";

        if (n == 1) {
            System.out.println(winner);
            return;
        }

        for (int i = 1; i < n; i++) {
            list[i] = scanner.next();
            if (list[i].equals(winner)) {
                counter++;
            } else {
                player2 = list[i];
            }
        }

        if (n % 2 == 0 && counter > n / 2) {
            System.out.println(winner);
        } else if (n % 2 != 0 && counter >= n / 2 + 1) {
            System.out.println(winner);
        } else {
            System.out.println(player2);
        }
    }
}