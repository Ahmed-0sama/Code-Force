import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc =new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int[size];
        for(int i=0;i<size; i++){
            int num=sc.nextInt();
            arr[i]=num;

        }
        int count=0;
        int min=arr[0];
        for(int i=0;i<=size-1;i++){
            if(min==arr[i]){
                count++;
            }
            if(min>arr[i]){
                min=arr[i];
                count=1;
            }

        }
        if(count%2==0){
            System.out.println("Unlucky");
        }
        else{
            System.out.println("Lucky");
        }

        }
    }
