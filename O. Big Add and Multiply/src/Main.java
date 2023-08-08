import java.math.BigInteger;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        BigInteger num = new BigInteger(n);
        BigInteger addResult = num.add(BigInteger.valueOf(9999));
        BigInteger mulResult = num.multiply(BigInteger.valueOf(9999));
        System.out.println(addResult);
        System.out.println(mulResult);
    }
}