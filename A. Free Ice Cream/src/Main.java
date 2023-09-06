import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int numb= sc.nextInt();
        long packets= sc.nextLong();
        int dissmes=0;
        for(int i=0; i<numb;i++){
            char x = sc.next().charAt(0);
            long y= sc.nextLong();
            if(x=='+'){
                packets+=y;
            }
           else{
               if(packets<y){
                   dissmes++;
               }
               else{
                   packets-=y;
               }
            }

        }
        System.out.println(packets+" "+dissmes);

    }
}