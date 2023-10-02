import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int tic=0;
        int toc=0;
        if(isPrime(y)){
            tic=1;
        }
        for(int i=x+1;i<y-1;i++){
            if(isPrime(i)){
                toc++;
            }
        }
        if(toc!=0){
            System.out.println("NO");

        } else if (tic!=0) {
            System.out.println("YES");

        }
        else {
            System.out.println("NO");
        }
    }
        static  boolean isPrime(int num)
        {
            if(num<=1)
            {
                return false;
            }
            for(int i=2;i<=num/2;i++)
            {
                if((num%i)==0)
                    return  false;
            }
            return true;

    }
}