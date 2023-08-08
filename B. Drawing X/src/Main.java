import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int [][]arr=new int[size][size];
        for(int i=0;i<size;i++){
            for(int j=size;j>0;j--){
                if(i==j){
                    System.out.print("\\");
                }
                else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}