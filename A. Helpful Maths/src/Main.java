import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        String[] y = x.split("\\+");
        int []in= new int[y.length];
        for(int i=0; i< y.length;i++){
            in[i]=Integer.parseInt(y[i]);
        }
        Arrays.sort(in);
        for(int i=0; i< in.length;i++){
            if(i+1== in.length){
                System.out.print(in[i]);

            }
            else{

                System.out.print(in[i]+"+");
            }
        }

    }
}