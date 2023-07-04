import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        StringBuilder b = new StringBuilder();
        for (int i = a.length() - 1; i >= 0; i--) {
            b.append(a.charAt(i));
        }
        int a1 = Integer.parseInt(a);
        int b1 = Integer.parseInt(b.toString());
        System.out.println(b1);
        if (a1 == b1) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}