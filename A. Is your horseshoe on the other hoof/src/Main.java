import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Map<Integer, Long> m = new HashMap<>();
        for (int i = 0; i < 4; i++) {
            long x = sc.nextLong();
            if (!m.containsValue(x)) {
                m.put(i, x);
            }
        }
        int counter =4- m.size();

        System.out.println(counter);
    }
}