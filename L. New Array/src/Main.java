import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr1=new int[size];
        int []arr2=new int[size];
        for(int i=0;i<size;i++){
            int x= sc.nextInt();
            arr1[i]=x;
        }
        for(int i=0;i<size; i++){
            int x= sc.nextInt();
            arr2[i]=x;
        }

        conc(arr1,arr2);

    }
    static void conc(int[]arr,int[]arr2){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr2[i]+" ");
        }
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
}