import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        int count=0;
        int []arr=new int[x.length()];
        for(int i=0; i<x.length();i++){
            arr[i]= Integer.parseInt(String.valueOf(x.charAt(i)));

        }for(int i=0; i<x.length();i++){
            count+=arr[i];
        }

        System.out.println(count);
    }
}