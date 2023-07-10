import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String x=sc.next();
        boolean equal=true;
        for(int i=0; i<x.length();i++){
            if (x.charAt(i)!=x.charAt(x.length()-1-i)){
                equal=false;
            }
        }

        if(equal){
            System.out.println("YES");
        }
        else {
            System.out.println("NO");
        }
    }
}