import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int numb=sc.nextInt();
        int even=0;
        int odd=0;
        int postive=0;
        int negative=0;
        for (int i=0;i<numb;i++){
        int x=sc.nextInt();
          if (x%2==0){
           even++;
        }
          else{
           odd++;
        }
        if(x>0){
            postive++;
        }
        else if(x<0){
            negative++;
        }
        }
        System.out.println("Even: "+even);
        System.out.println("Odd: "+odd);
        System.out.println("Positive: "+postive);
        System.out.println("Negative: "+negative);
        }
    }
