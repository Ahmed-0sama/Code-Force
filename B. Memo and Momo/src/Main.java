import java.util.Scanner;

import static java.lang.System.exit;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        long a= sc.nextLong();
        long b= sc.nextLong();
        long k= sc.nextLong();
        if(a%k==0&&b%k==0){
            System.out.println("Both");
            exit(0);
        } else if (a%k==0) {
            System.out.println("Memo");
            exit(0);
        }
        else if(b%k==0){
            System.out.println("Momo");
            exit(0);
        }
        else {
            System.out.println("No One");
        }

    }
}