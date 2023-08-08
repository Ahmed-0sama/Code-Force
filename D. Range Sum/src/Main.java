import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long size= sc.nextLong();
        for(long i=0; i<size;i++){
            long sum=0;
            long min= sc.nextLong();
            long max= sc.nextLong();
            for(long j=min;j<=max;j++){
                sum+=j;
            }
            System.out.println(sum);
        }

    }
}