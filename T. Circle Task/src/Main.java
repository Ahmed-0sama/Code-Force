import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int x1=sc.nextInt();
        int y1= sc.nextInt();
        int radius= sc.nextInt();
        int number= sc.nextInt();
        for(int i=0; i<number;i++){
            int x2= sc.nextInt();
            int y2= sc.nextInt();
            if(Math.sqrt(Math.pow((x2 - x1),2)+Math.pow((y2-y1),2))<=radius){
                System.out.println("YES");
            }
            else {
                System.out.println("NO");
            }
        }
    }
}