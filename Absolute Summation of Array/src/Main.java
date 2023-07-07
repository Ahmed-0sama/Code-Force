import java.util.Scanner;

import static java.lang.Math.abs;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int[]arr=new int[size];
        for(int i=0;i<=size-1;i++){
            int x=sc.nextInt();
            arr[i]=x;

        }
        int sum=0;
        for(int i=0;i<=size-1;i++){
            sum+=(arr[i]);

        }
        System.out.println(abs(sum));
    }
}