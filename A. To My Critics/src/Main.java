import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        for(int i=0; i<size;i++){
            int x= sc.nextInt();
            int y=sc.nextInt();
            int z= sc.nextInt();
            if (x+y>=10||x+z>=10||y+z>=10){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }

    }
}