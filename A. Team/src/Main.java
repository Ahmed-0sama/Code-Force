import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();

        int count=0;
        for(int i=0; i<size;i++){
           int Petya= sc.nextInt();
           int Vasya=sc.nextInt();
           int Tonya=sc.nextInt();
           if(Vasya==1&&Tonya==1){
               count++;
           } else if (Tonya==1&&Petya==1) {
               count++;
           } else if (Vasya==1&&Petya==1) {
               count++;
           }

        }
        System.out.println(count);

    }
}