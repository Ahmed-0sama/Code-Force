import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong();
        long b = sc.nextLong();
        long c = sc.nextLong();
        long d = sc.nextLong();
        long res1=a+b*c;
        long res2=a*b+c;
        long res3=a+b-c;
        long res4=a-b+c;
        long res5=a*b-c;
        long res6=a-b*c;
        if(res1==d||res2==d||res3==d||res4==d||res5==d||res6==d){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

    }
}