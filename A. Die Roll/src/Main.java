import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
        int y= sc.nextInt();
        int numerator= 6-Math.max(x,y)+1;
        int denominator = 6;

        int gcd = calculateGCD(numerator, denominator);

        int simplifiedNumerator = numerator / gcd;
        int simplifiedDenominator = denominator / gcd;

        System.out.println(simplifiedNumerator + "/" + simplifiedDenominator);
    }

     static int calculateGCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return calculateGCD(b, a % b);
    }
}