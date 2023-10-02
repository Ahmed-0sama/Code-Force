import javafx.util.Pair;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        for(int i=0; i<size;i++){
            int x= sc.nextInt();
            int count=0;
            int []arr=new int[x];
            for(int j=0; j<x;j++){
                arr[j]= sc.nextInt();
            }
            int[]pre=new int[x+9];
            for(int k=1; k<x;k++){
                pre[k]=pre[k-1]+arr[k];
            }
            for(int k=1; k<x;k++){
                if(pre[k]==pre[k+1]){
                    count++;
                }

        }
            System.out.println(count);
        }

        
    }
}