import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
        if(x==0){
            System.out.println("1");
        }
        else{
            int []arr={8,4,2,6};
            x=(x-1)%4;
            System.out.println(arr[x]);
        }

    }
}