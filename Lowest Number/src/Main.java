import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size =sc.nextInt();
        int []arr=new int[size];
        for(int i=0; i<=size-1;i++){
           int num=sc.nextInt();
            arr[i]=num;
        }
        int min=arr[0];
        int pos=0;
        for(int i=0; i<=size-1;i++){
            if(arr[i]<min){
                min=arr[i];
                pos=i;
            }

        }
        pos++;
        System.out.println(min+" "+pos);

    }
}