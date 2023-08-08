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
        for(int i=0;i<size;i++){
            if(arr[i]==0){
                if (arr[i] == 0) {
                    for (int j = i - 1, k = 0; j >= k; j--, k++) {
                        int temp = arr[j];
                        arr[j] = arr[k];
                        arr[k] = temp;
                    }
                }
            }
        }
        for(int i=0; i<size;i++){
            System.out.print(arr[i]+" ");
        }
    }
}