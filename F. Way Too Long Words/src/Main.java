import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        for (int i = 0; i < size; i++) {
            String x = sc.next();
            int lengh = x.length();
            if (lengh > 10) {
                System.out.print(x.charAt(0));
                System.out.print(lengh-2);
                System.out.print(x.charAt(lengh-1));
                System.out.println();
            } else {
                System.out.println(x);
            }
        }
    }
}