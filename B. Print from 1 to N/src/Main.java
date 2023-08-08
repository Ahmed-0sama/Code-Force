import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int x= sc.nextInt();

        print(x,1);
    }
    static void print(int x ,int cur){

        if(cur>x){
            return;
        }
        else{
            System.out.println(cur);
            print(x,cur+1);
        }
    }
}