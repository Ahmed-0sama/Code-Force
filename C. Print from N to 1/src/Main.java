import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();
        print(x);

    }
    static void print (int x){
        if(x==0){
            return;
        }
        else if(x==1){
            System.out.println(x);
        }
        else {
            System.out.print(x+" ");
            print(x-1);

        }
    }
}