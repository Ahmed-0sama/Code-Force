import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int numb1= sc.nextInt();
        int numb2= sc.nextInt();
        int mod= sc.nextInt();
        int min = Math.min(numb1,numb2);
        int max=Math.max(numb1,numb2);
        long result=1;
        for(int i=min;i<=max;i++){
           result=(result*i)%mod;
        }

        System.out.println(result);
    }
}