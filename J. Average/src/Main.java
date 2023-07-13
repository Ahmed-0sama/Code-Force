import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int size= sc.nextInt();
        double []arr=new double[size];
        for(int i=0;i< arr.length;i++){
            double x=sc.nextDouble();
            arr[i]=x;
        }
        System.out.println(mean(arr));


    }
    static double mean(double[]arr){
        double sum=0;
        for(int i=0;i<arr.length;i++){
            sum+=arr[i];

        }
        double avg=sum/ arr.length;
        return avg;

    }
}