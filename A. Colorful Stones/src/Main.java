import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        String t = input.nextLine();

        int currentPosition = 1;
        for (int i = 0; i < t.length(); i++) {
            if (s.charAt(currentPosition - 1) == t.charAt(i)) {
                currentPosition++;
            }
        }

        System.out.println(currentPosition);
    }
}