import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        long size = sc.nextLong();
        long sum = size * (size + 1) / 2; // use formula for sum of first n natural numbers
        System.out.println(sum);
    }
}