import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long a= sc.nextLong();
        long b= sc.nextLong();
        long q= sc.nextLong();
        long res=q%3;
        if(res==1){
            System.out.println(a);
        }
        else if(res==2){
            System.out.println(b);
        }
        else{
            System.out.println((a ^ b));
        }

    }
}