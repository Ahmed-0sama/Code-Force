import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
        int y= sc.nextInt();
        int [][]arr=new int[x][y];
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                int num=sc.nextInt();

                        arr[i][j]=num;
            }

        }
        for (int i=0;i<x;i++){
            for(int j=y-1;j>=0;j--){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
    }
}