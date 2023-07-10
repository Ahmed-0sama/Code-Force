import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int forces= sc.nextInt();
        int[][]arr=new int[forces][3];
        int xAxis=0;
        int yAxis=0;
        int zAxis=0;
       for(int i=0;i<forces;i++){
           for(int j=0;j<3;j++){
               int x= sc.nextInt();
               arr[i][j]=x;

           }
            xAxis+=arr[i][0];
           yAxis+=arr[i][1];
           zAxis+=arr[i][2];
       }
       if(xAxis==0&&yAxis==0&&zAxis==0){
           System.out.println("YES");
       }
       else{
           System.out.println("NO");
       }

    }
}