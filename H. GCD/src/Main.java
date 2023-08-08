import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x = sc.nextInt();

        int y = sc.nextInt();

        int minValue = Math.min(x, y);
        int maxValue = Math.max(x, y);

        int gcd = calculateGCD(maxValue, minValue);
        int lcm = calculateLCM(maxValue, minValue);

        System.out.println(gcd+" "+lcm);
    }

    public static int calculateGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static int calculateLCM(int a, int b) {
        int gcd = calculateGCD(a, b);
        int lcm = (a * b) / gcd;
        return lcm;
    }
}