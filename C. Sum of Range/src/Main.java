import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long x= sc.nextLong();
        long y= sc.nextLong();
        long min=Math.min(x,y);
        long max=Math.max(x,y);
        long n=max-min+1;
        long sum=n*(min+max)/2;
        long sumEven=0;
        long sumOdd=0;
        for(long i=min;i<=max;i++){
            if(i%2==0){
                sumEven+=i;
            }
            else{
                sumOdd+=i;
            }
        }
        System.out.println(sum);
        System.out.println(sumEven);
        System.out.println(sumOdd);
    }
}