import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long a=sc.nextLong();
        long b= sc.nextLong();
        if(a%2!=0){
            a++;
        }
       if(Math.abs(a-b)<2){
            System.out.println(-1);
        }
        else{
            System.out.println(a+" "+(a+1)+" "+(a+2));
        }

    }
}