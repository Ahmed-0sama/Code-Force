import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        while(true){
            int x= sc.nextInt();

            if(x==1999){
                System.out.println("Correct");
                break;
            }
            else {
                System.out.println("Wrong");
            }
        }
        }
    }