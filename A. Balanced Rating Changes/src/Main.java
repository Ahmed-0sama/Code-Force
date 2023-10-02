import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int []arr=new int [size];
        for(int i=0;i<size;i++){
            arr[i]= sc.nextInt();

        }
        boolean flag=false;
        for(int i=0;i<size;i++){
            if(arr[i]%2==0){
                System.out.println(arr[i]/2);
            }
            else if(!flag){
                flag=true;
                int res1=(int)Math.ceil((double)arr[i]/2);
                System.out.println(res1);
            }
            else{
                flag=false;
                int res2=(int)Math.floor((double) arr[i]/2);
                System.out.println(res2);
            }
        }
    }
}