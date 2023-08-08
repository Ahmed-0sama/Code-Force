import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int good = scanner.nextInt();
        int count = 0;
        for (int i = 0; i < size; i++) {
            String numStr = scanner.next();
            Set<Integer> digits = new HashSet<>();
            for (char c : numStr.toCharArray()) {
                int digit = Character.getNumericValue(c);
                if (digit <= good) {
                    digits.add(digit);
                }
            }
            if (digits.size() == good + 1) {
                count++;
            }
        }
        System.out.println(count);
    }
}