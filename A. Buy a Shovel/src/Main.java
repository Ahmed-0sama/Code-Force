import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int sh = sc.nextInt();
        int ch = sc.nextInt();
        int count = 1;

        while (true) {
            if (((sh * count) % 10) == 0 || ((sh * count) % 10 == ch)) {
                System.out.println(count);
                return;
            }
            count++;
        }
    }
}