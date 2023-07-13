import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int[]arr=new int[size];
        for(int i=0;i<size;i++){
            int x= sc.nextInt();
            arr[i]=x;
        }
        max_min(arr,size);


    }
    static void max_min(int []arr, int x){
        int max=arr[0];
        int min=arr[0];
        for (int i=0;i<x;i++){
            if(arr[i]>max){
                max=arr[i];
            } else if (min>arr[i]) {
                min=arr[i];

            }
        }
        System.out.println(min+" "+max);

    }
}