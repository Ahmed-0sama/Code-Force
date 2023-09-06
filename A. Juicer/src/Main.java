import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int numb= sc.nextInt();
        long size= sc.nextLong();
        long clean= sc.nextLong();
        int times=0;
        int count=0;
        for(int i=0; i<numb;i++){
            long x=sc.nextLong();
            if(x<=size){
                count+=x;
            }
            if(count>clean){
                times++;
                count=0;
            }
        }
        System.out.println(times);

    }
}