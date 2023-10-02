import java.util.Scanner;
import java.util.Map;
import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine().trim();

        Map<Character, Long> charCount = new HashMap<>();


        for (char c : s.toCharArray()) {

            if (Character.isLetter(c)) {

                charCount.put(c, charCount.getOrDefault(c, 0L) + 1);
            }
        }
        charCount.entrySet().stream()
                .sorted(Map.Entry.comparingByKey())
                .forEach(entry -> System.out.println(entry.getKey() + " " + entry.getValue()));
    }
}
