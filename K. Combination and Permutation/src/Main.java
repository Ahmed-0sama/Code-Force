import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long n= sc.nextLong();
        long r= sc.nextLong();

        long per=fact(n)/fact(n-r);
        long comb=fact(n)/(fact(n-r)*fact(r));
        System.out.print(comb+" "+per);

    }
    static long fact(long x){
        long count =1;
        long result=1;
        while(count<=x){
            result*=count;
            count++;
        }
        return result;
    }
}