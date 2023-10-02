import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int attemp= sc.nextInt();
        int k=sc.nextInt();
        int size=0;
        for(int i=0;i<attemp;i++){
            int x= sc.nextInt();
            int y= sc.nextInt();
            size+=y-x+1;
        }
        int count=0;
        while(size%k!=0){
            size++;
            count++;
        }
        System.out.println(count);
    }
}