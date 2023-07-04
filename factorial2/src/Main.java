import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        long res=1;
        for(int i=0;i<x;i++){

            int val= sc.nextInt();

            for(int j=1;j<=val;j++){

            if(val==0){
                System.out.println(1);

            }
            else{
            res=res*j;
        }
    }
            System.out.println(res);
            res=1;
        }
    }}