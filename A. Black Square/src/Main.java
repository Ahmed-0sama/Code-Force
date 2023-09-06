import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int first= sc.nextInt();
        int secound= sc.nextInt();
        int third= sc.nextInt();
        int fourth= sc.nextInt();
        String x= sc.next();
        char []c=x.toCharArray();
        int sum=0;
        for (char value : c) {
            if (value == '1') {
                sum += first;
            } else if (value == '2') {
                sum += secound;
            } else if (value == '3') {
                sum += third;
            } else {
                sum += fourth;
            }
        }
        System.out.println(sum);

    }
}