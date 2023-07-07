import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        int count =0;
        int min =0;
        int max=0;
        while (true){
            int numb1=sc.nextInt();
            int numb2=sc.nextInt();
            if (numb1>numb2){
                max=numb1;
                min=numb2;
            }
            else{
                max=numb2;
                min =numb1;
            }
        if (numb1<=0||numb2<=0){
            break;

        }
        else {
            for (int i=min;i<=max;i++){
                System.out.print(i+" ");
                count +=i;
            }
            System.out.println("sum ="+count);
        }
        count =0;
    }
}
}