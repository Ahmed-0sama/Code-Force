import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long eyes= sc.nextLong();
        long mouth= sc.nextLong();
        long body= sc.nextLong();
        long number=0;
        while(eyes>0){

          if (eyes>=2&&body>=1&&mouth>=1) {
                number++;
                eyes--;
                eyes--;
                body--;
                mouth--;

            }
              else if (eyes>=2&&body>=1) {
                number++;
                eyes--;
                        eyes--;
                body--;

            }

            else if(mouth>=1&&body>=1){
                number++;
                eyes--;
                mouth--;
                body--;
            }
        }
        System.out.println(number);


    }
}