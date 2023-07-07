import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int[] arr = new int[size];
        //take the arry from the user
        for (int i=0; i<size;i++){
            arr[i]=sc.nextInt();
        }

        for (int i=0; i<size/2;i++){
            //print the first and the last item
            System.out.print(arr[i]+" "+arr[size-i-1]+" ");

        }
        // if it is odd size
        if (size%2!=0){
            System.out.println(arr[size/2]);

        }
    }
}