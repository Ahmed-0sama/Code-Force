import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x1= sc.nextInt();
        int y1= sc.nextInt();
        int z1= sc.nextInt();

        int sum=max(x1,y1,z1)-min(x1,y1,z1);

        System.out.println(sum);

    }
    public  static int min(int x,int y,int z){
        if(x>=y&&y<=z){
            return y;
        }
        else if(z>x&&y>=x){


            return x;
        }
        else{
            return z;
    }
    }
    public static int max(int x,int y,int z){
        if(x>=y&&x>z){
            return x;

        } else if (y>=x&&y>=z) {
            return y;

        }
        else return z;
    }
}