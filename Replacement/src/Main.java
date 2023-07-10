import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0;i<=size-1;i++){
           int x= sc.nextInt();
            arr[i]=x;
        }

        for(int i=0;i<=size-1;i++){
            if(arr[i]>0){
                arr[i]=1;
            }
            else if(arr[i]<0){
                arr[i]=2;
            }
            System.out.print(arr[i]+" ");
        }

    }
}