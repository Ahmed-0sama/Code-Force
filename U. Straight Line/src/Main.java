import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System .in);
        int x1= sc.nextInt();
        int y1= sc.nextInt();
        int x2= sc.nextInt();
        int y2= sc.nextInt();
        int x3=sc.nextInt();
        int y3= sc.nextInt();
        double re1=((y3-y2)*(x2-x1));
        double re2=((y2-y1)*(x3-x2));
        if(re1==re2){
            System.out.println("YES");

        }
        else{
            System.out.println("NO");
        }

    }
}