import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine();

        while (t-- > 0) {
            String cards = scanner.nextLine();
            if (canMakeABC(cards)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }

    static boolean canMakeABC(String cards) {

        return cards.equals("abc") || cards.equals("acb") || cards.equals("bac") ||  cards.equals("cba");
    }
}
