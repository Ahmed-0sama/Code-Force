import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = 1;

        for (int i = 1; i <= n; i++) {
            System.out.println(t + " " + (t+1) + " " + (t+2) + " PUM");
            t += 4;
        }
    }
}