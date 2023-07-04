import java.util.Scanner;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int num= sc.nextInt();
        for (int i=0;i<num;i++){
            int val=sc.nextInt();
            if (val==0){
                System.out.println(0);
                continue;
            }
            while(val!=0){
                int myval=val%10;
                System.out.print(myval+ " ");
                val/=10;
            }
            System.out.println();
        }
        }
}