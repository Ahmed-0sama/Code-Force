import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        char[] chars = s.toCharArray();

        // Check if the string can be made into a palindrome
        for (int i = 0; i < chars.length / 2; i++) {
            if (chars[i] != chars[chars.length - i - 1] && chars[i] != '?' && chars[chars.length - i - 1] != '?') {
                System.out.println("-1");
                return;
            }
        }

        // Replace the '?' characters with the corresponding characters to make the string a palindrome
        for (int i = 0; i < chars.length / 2; i++) {
            if (chars[i] != chars[chars.length - i - 1]) {
                if (chars[i] == '?') {
                    chars[i] = chars[chars.length - i - 1];
                } else if (chars[chars.length - i - 1] == '?') {
                    chars[chars.length - i - 1] = chars[i];
                }
            } else if (chars[i] == '?' && chars[chars.length - i - 1] == '?') {
                chars[i] = 'a';
                chars[chars.length - i - 1] = 'a';
            }
        }

        // If the length of the string is odd, replace the middle '?' with 'a'
        if (chars.length % 2 != 0 && chars[chars.length / 2] == '?') {
            chars[chars.length / 2] = 'a';
        }

        System.out.println(new String(chars));
    }
}