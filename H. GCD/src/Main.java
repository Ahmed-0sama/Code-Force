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

        if(b==0){
            return a;
        }
        else{
            return calculateGCD(b,a%b);
        }
    }

    static int calculateLCM(int a, int b) {
        int gcd = calculateGCD(a, b);
        return (a / gcd) * b;
    }
}