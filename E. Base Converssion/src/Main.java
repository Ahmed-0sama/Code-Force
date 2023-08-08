import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);


        int size= sc.nextInt();
        for(int i=0;i<size;i++) {

            int x= sc.nextInt();

            String binary = decimalToBinary(x);
            System.out.println(binary);
        }

    }
    public static String decimalToBinary(int num) {
        if (num == 0) {
            return "0";
        } else if (num == 1) {
            return "1";
        } else {
            return decimalToBinary(num / 2) + Integer.toString(num % 2);
        }
    }
}