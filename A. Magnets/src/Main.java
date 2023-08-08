import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        int a,b=0,c=0;
        for(int i=0; i<size;i++){
            a= sc.nextInt();
            if(a!=b){
                c++;
                b=a;
            }
        }
        System.out.println(c);


    }
}