import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int numb= sc.nextInt();
        int height=sc.nextInt();
        int count=0;
        for(int i=0;i<numb;i++){
            int freind= sc.nextInt();
            if(freind>height){
                count=count+2;
            }
            else{
                count++;

            }

        }
        System.out.println(count);

    }
}