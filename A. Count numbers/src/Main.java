import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n= sc.nextInt();
        long size= sc.nextInt();
        long []arr=new long[n+1];
        for(int i=0;i<size;i++){
            long x= sc.nextLong();
            int y= sc.nextInt();
            if(x==1){
                arr[y]++;
            }
            else{
                System.out.println(arr[y]);
            }
        }

    }
}