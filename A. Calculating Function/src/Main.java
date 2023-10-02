import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long x= sc.nextLong();
        if(x%2==0){
            System.out.println(x/2);
        }
        else{
            System.out.println(x/2-x);
        }

    }
}