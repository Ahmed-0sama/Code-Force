import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String binary = sc.nextLine();
        BigInteger numb = new BigInteger(binary, 2);

        BigInteger counter = BigInteger.ZERO;
        BigInteger value = BigInteger.ONE;

        while (value.compareTo(numb) < 0) {
            value = value.multiply(BigInteger.valueOf(4));
            counter = counter.add(BigInteger.ONE);
        }

        System.out.println(counter);
    }
}
