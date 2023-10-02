import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        for(int i=0; i<size;i++){
            int v1= sc.nextInt();
            int v2= sc.nextInt();
            int cup= sc.nextInt();
            int diff= Math.abs(v2-v1);
            int half=diff/2;
            if(diff%2==0){

                if(half%cup==0){
                    System.out.println(half/cup);

                }
                else {
                    System.out.println((half/cup)+1);
                }

            }
            else {


                    System.out.println((half/cup)+1);

            }


        }

    }
}