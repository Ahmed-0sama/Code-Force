import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        long size= sc.nextLong();
        for(int i=0; i<size;i++){
            long a= sc.nextLong();
            long b=sc.nextLong();
            long c= sc.nextLong();
            if(a+b==c){
                System.out.println("+");
            }
            else{
                System.out.println("-");
            }
        }
    }
}