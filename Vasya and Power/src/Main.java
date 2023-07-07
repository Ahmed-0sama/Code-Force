import java.util.Scanner;

import static java.lang.Math.max;
import static java.lang.Math.min;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int sum=0;
        int num=sc.nextInt();
        for(int i=0;i<num;i++){
            int x= sc.nextInt();
            int y= sc.nextInt();
            int min=min(x,y);
            int max=max(x,y);

            for(int j=min+1;j<max;j++){
                if (j%2==1){
                    sum+=j;
                }


            }
            System.out.println(sum);
            sum=0;
        }


    }
}