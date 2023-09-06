import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0; i<size;i++){
            arr[i]= sc.nextInt();

        }
        int count=0;
        Arrays.sort(arr);
        for(int i=1; i<size-1;i++){
            if(arr[0]<arr[i]&&arr[i]<arr[size-1]){
                count++;
            }
        }
        System.out.println(count);
    }
}