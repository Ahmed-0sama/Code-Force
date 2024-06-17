import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Vector;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            int size = sc.nextInt();
            Vector<Integer> arr = new Vector<Integer>(size);
            Map<Integer, Integer> m = new HashMap<>();

            for (int j = 0; j < size; j++) {
                int num = sc.nextInt();
                arr.add(num);
                if (m.containsKey(num)) {
                    m.put(num, -1);
                } else {
                    m.put(num, j);
                }
            }

            int firstUniqueIndex = size;
            for (Map.Entry<Integer, Integer> entry : m.entrySet()) {
                if (entry.getValue() != -1 && entry.getValue() < firstUniqueIndex) {
                    firstUniqueIndex = entry.getValue();
                }
            }

            System.out.println(firstUniqueIndex != size ? firstUniqueIndex + 1 : -1);
        }
    }
}
