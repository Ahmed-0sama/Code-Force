import java.util.Scanner;

public class Main {
    public static void main(String[] args) {


        Scanner sc=new Scanner(System.in);
        String x= sc.next();
        int cross=x.indexOf('|');
        String leftPan=x.substring(0,cross);
        String rightPan=x.substring(cross+1);
        String add= sc.next();
        StringBuilder leftBuilder = new StringBuilder(leftPan);
        StringBuilder rightBuilder = new StringBuilder(rightPan);
        for( char pointer:add.toCharArray()){
            if (leftBuilder.length() <= rightBuilder.length()) {
                leftBuilder.append(pointer);
            } else {
                rightBuilder.append(pointer);
            }
        }
        if(leftBuilder.length()==rightBuilder.length()){
            System.out.println(leftBuilder+"|"+rightBuilder);
        }
        else{
            System.out.println("Impossible");
        }
    }
}