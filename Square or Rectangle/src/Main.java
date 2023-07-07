import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        for (int i=0; i<num; i++){
            int width=sc.nextInt();
            int height=sc.nextInt();
            if(width==height){
                System.out.println("Square");
            }
            else {
                System.out.println("Rectangle");
            }
        }

    }
}