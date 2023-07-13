import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        for(int i=0;i<size;i++){
            int num= sc.nextInt();
            String k=sc.next();
            print(num,k);

        }


    }
    static  void print (int x,String u){
        int size=x;
        for(int i=0;i<x;i++){
            System.out.print(u+" ");
        }
        System.out.println();
    }
}