import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size = sc.nextInt();
        int[]arr=new int[size];
        for(int i=0; i<size;i++){
            arr[i]= sc.nextInt();
        }
        printEven(arr,size-1);


    }
    static void printEven(int[]arr,int size){
        if(size==-1){
            return;
        } else if (size==0) {
            System.out.print(arr[0]);

        } else {
            if(size%2==0){
                System.out.print(arr[size]+" ");
            }
            printEven(arr,size-1);
        }

    }
}