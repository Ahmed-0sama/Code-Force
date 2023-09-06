import java.util.Scanner;
public class Main {

    public static void main(String[] args) {


        Scanner sc =new Scanner(System.in);
        int n= sc.nextInt();
        int arr[]=new int[n+1];
        int p= sc.nextInt();
        int f=0;
        int c;
        for(int i=1;i<=p;i++){
            c= sc.nextInt();
            arr[c]++;
        }
        int y= sc.nextInt();
        for(int i=1;i<=y;i++){
            c= sc.nextInt();
            arr[c]++;
        }
        for(int i=1;i<arr.length;i++)
            if(arr[i]==0)f=1;
        if(f==0)System.out.println("I become the guy.");
        else System.out.println("Oh, my keyboard!");

    }
}