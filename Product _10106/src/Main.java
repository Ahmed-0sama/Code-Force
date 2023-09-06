import java.util.Scanner;

public class Main {
    public static final int MXN = 600;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s1, s2;
        while (scanner.hasNext()) {
            s1 = scanner.next();
            s2 = scanner.next();
            StringBuilder sb1 = new StringBuilder(s1);
            StringBuilder sb2 = new StringBuilder(s2);
            sb1.reverse();
            sb2.reverse();
            s1 = sb1.toString();
            s2 = sb2.toString();
            int[] a = new int[MXN];
            for (int i = 0; i < s1.length(); i++) {
                for (int j = 0; j < s2.length(); j++) {
                    a[i + j] += (s1.charAt(i) - '0') * (s2.charAt(j) - '0');
                }
            }
            for (int i = 0; i < MXN - 1; i++) {
                a[i + 1] += a[i] / 10;
                a[i] %= 10;
            }
            int i = MXN - 1;
            while (i > 0 && a[i] == 0) i--;
            for (; i >= 0; i--) System.out.print(a[i]);
            System.out.println();
        }
    }
}