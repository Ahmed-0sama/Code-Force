import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        String x= sc.next();
        int lowcase=0;
        int upcase=0;
        for(int i=0; i<x.length();i++){
            char c=x.charAt(i);
            if(Character.isLowerCase(c)){
                lowcase++;

            } else if (Character.isUpperCase(c)) {
                upcase++;

            }

        }
        if(upcase>lowcase){
            System.out.println(x.toUpperCase());
        }
        else {
            System.out.println(x.toLowerCase());
        }

    }
}