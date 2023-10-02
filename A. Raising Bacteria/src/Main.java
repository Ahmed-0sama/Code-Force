import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
        int sol=0;
        while (x > 0) {
            if(x%2!=0){
                sol++;
            }
            x/=2;
        }

        System.out.println(sol);
    }
    }
