import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int max=0;
        int x= sc.nextInt();

        for(int i=0;i<x;i++){
            int num=sc.nextInt();
            if (num>max){
                max=num;
            }
        }
        System.out.println(max);
        }
    }
