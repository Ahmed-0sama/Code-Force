import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0; i<size;i++){
            arr[i]= sc.nextInt();
        }
        int hard=0;
        for(int i=0; i<size;i++){
            if(arr[i]==1){
                hard++;
                break;
            }
        }
        if (hard==0){
            System.out.println("EASY");
        }
        else {
            System.out.println("HARD");
        }

    }
}