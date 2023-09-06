import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int columns=sc.nextInt();
        int []arr=new int[columns];
        for(int i=0; i<columns;i++){
            arr[i]= sc.nextInt();
        }
        Arrays.sort(arr);

        for(int i=0;i<columns;i++){
            System.out.print(arr[i]+" ");
        }

    }
}