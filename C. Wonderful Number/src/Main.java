import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numb = sc.nextInt();
        if (odd(numb) && pallindrom(numb)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }

    static boolean odd(int x) {
        return x % 2 != 0;
    }

    static boolean pallindrom(int x) {
        String binary = Integer.toBinaryString(x);
        int n = binary.length();
        for (int i = 0; i < n / 2; i++) {
            if (binary.charAt(i) != binary.charAt(n - i - 1)) {
                return false;
            }
        }
        return true;
    }
}