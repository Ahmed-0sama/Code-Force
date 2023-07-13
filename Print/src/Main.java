import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        print(num);
    }

    static void print(int x) {
        for (int i = 1; i <= x; i++) {
            if (i > 1) {
                System.out.print(" ");
            }
            System.out.print(i);
        }
    }
}