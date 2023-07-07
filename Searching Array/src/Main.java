import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0;i<=size-1;i++){
            int x= sc.nextInt();
            arr[i]=x;

        }
        int num= sc.nextInt();

        int foundInex=-1;
        for(int i=0;i<=size-1;i++){
            if(arr[i]==num){

               foundInex=i;
               break;
            }


        }
        System.out.println(foundInex);


    }
}