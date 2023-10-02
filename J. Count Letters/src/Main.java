import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String value = scanner.nextLine();

        char[] charArray = value.toCharArray();
        Arrays.sort(charArray);

        int size = charArray.length;
        for (int i = 0; i < size; i++) {
            char c = charArray[i];
            int counter = 1;
            while (i + 1 < size && charArray[i] == charArray[i + 1]) {
                counter++;
                i++;
            }
            System.out.println(c + " : " + counter);
        }
    }
}
