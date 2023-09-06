import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        for(int i=0; i<size;i++){
            String x= sc.next();
            String y=x.toLowerCase();
            if(y.equals("yes")){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }

    }
}