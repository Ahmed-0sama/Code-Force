import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Long a= sc.nextLong();
        Long b= sc.nextLong();
        Long c=sc.nextLong();
        long x=a/c;
        long y=b/c;
        if(a%c!=0){
            x++;
        }
        if(b%c!=0){
            y++;
        }
        System.out.println(x*y);

    }
}