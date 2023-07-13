import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        for(int i=0;i<size;i++){
            int x= sc.nextInt();
            if(isprime(x)){
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }



    }
    static boolean isprime(int x){
        boolean isprime=true;
        if (x <= 1) {

            isprime=false;
        }
        for(int i=2;i<=Math.sqrt(x);i++){
            if (x%i==0){
                isprime=false;
                break;
            }
        }
        return isprime;
    }
}