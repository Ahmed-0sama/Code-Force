import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine(); // Consume the newline after reading t

        while (t-- > 0) {
            String s = sc.nextLine();
            int coins = 0;
            boolean changed = true; 


            while (changed) {
                changed = false; // Reset the flag before each iteration

                // Iterate through the string and look for "AB" or "BA"
                for (int i = 0; i < s.length() - 1; i++) {
                    if (s.charAt(i) == 'A' && s.charAt(i + 1) == 'B') {
                        coins++;
                        i++; // Skip the next character
                        changed = true; // A change occurred
                    } else if (s.charAt(i) == 'B' && s.charAt(i + 1) == 'A') {
                        coins++;
                        i++; // Skip the next character
                        changed = true; // A change occurred
                    }
                }

                // If a change occurred, update the string and recheck
                if (changed) {
                    s = s.replaceAll("AB", "BC");
                    s = s.replaceAll("BA", "CB");
                }
            }

            System.out.println(coins);
        }
    }
}
