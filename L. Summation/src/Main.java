import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0; i<size;i++){
            int x= sc.nextInt();
            arr[i]=x;
        }

        System.out.println(sum(arr,size-1,0));

    }
    static long sum(int[]arr,int size,long sum){
        if(size==-1){
            return sum;
        }
        else {
            sum+=arr[size];
            return sum(arr,size-1,sum);
        }
    }
}