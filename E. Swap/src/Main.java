import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num= sc.nextInt();
        int num2= sc.nextInt();
        print(num,num2);
        

    }
    static void print(int x,int y){
        System.out.print(y+" "+x);

    }
}