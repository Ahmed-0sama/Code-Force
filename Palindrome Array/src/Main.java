import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int[]arr=new int[size];
        for(int i=0;i<=size-1;i++){
            int numb= sc.nextInt();
            arr[i]=numb;

        }
        boolean isequal=true;
        for(int i=0;i<size-1/2;i++){
            if(arr[i]!=arr[size-1-i]){
                isequal=false;
                break;
            }
        }
        if(isequal){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }

    }
}