import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
                int row= sc.nextInt();
                int col= sc.nextByte();
                char[][]arr=new char[row][col];
                for(int i=0; i<row;i++){
                    for(int j=0; j<col;j++){
                        arr[i][j]= sc.next().charAt(0);
                    }
                }
                int cyan=0;
                int yellow=0;
                int magneta=0;

        for(int i=0; i<row;i++){
            for(int j=0; j<col;j++){

              if(arr[i][j]=='C'){
                    cyan++;
                }
                else if(arr[i][j]=='Y'){
                    yellow++;
                }
                else if(arr[i][j]=='M'){
                    magneta++;
                }


            }
        }
        if(cyan==0&&yellow==0&&magneta==0){
            System.out.println("#Black&White");
        }
        else {
            System.out.println("#Color");
        }
    }
}